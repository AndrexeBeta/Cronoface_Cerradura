pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Instalar PlatformIO') {
            steps {
                bat 'pip install platformio'
            }
        }

        stage('Compilar ESP32 con PlatformIO') {
            steps {
                dir('Cronoface') {
                    bat 'pio run'
                }
            }
        }
    }
