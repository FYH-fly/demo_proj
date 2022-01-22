pipeline {
  agent any
  stages {
    stage('build') {
      parallel {
        stage('build') {
          steps {
            echo 'hello'
            sh 'sh build.sh'
          }
        }

        stage('') {
          steps {
            echo 'test mult build step'
          }
        }

      }
    }

    stage('exec') {
      steps {
        echo 'exec'
        sh './build/cpp_demo'
      }
    }

    stage('deploy') {
      steps {
        echo 'mock deploy'
        sleep 5
        sh '''rm -rf demo_package*
mkdir demo_package
cp ./build/cpp_demo ./demo_package
cp ./build/lib_add/liblib_add.so ./demo_package
tar -cvf demo_package.tar demo_package/

cp demo_package.tar /data/deploy
cd /data/deploy
tar -xvf demo_package.tar
./demo_package/cpp_demo'''
      }
    }

    stage('TEST') {
      steps {
        echo 'MOCK TEST'
        sh 'echo hello'
      }
    }

  }
}