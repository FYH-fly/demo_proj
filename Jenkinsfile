pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        echo 'hello'
        sh 'sh build.sh'
      }
    }

    stage('exec') {
      steps {
        echo 'exec'
        sh './build/cpp_demo'
      }
    }

  }
}