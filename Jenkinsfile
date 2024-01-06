pipeline {
    agent any  
    stages {
        stage ('Cleanup') {
            steps {
		echo "Pulled from ${env.GIT_URL}, branch ${env.GIT_BRANCH}, commit {$env.GIT_COMMIT} ..."
                sh 'git clean -xdf'
                sh 'git status'
	    }
	}
        stage ('Build') {
            steps {
		echo "Starting build #${env.BUILD_NUMBER} on ${env.NODE_NAME} node ..."
                sh 'cmake --version'
                sh 'cmake .'
                sh 'make --version'
                sh 'make -k || true'
            }
        }
    }
}
