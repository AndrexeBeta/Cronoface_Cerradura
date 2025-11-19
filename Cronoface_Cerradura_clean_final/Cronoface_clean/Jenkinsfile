pipeline {
    agent any

    environment {
        PATH = "C:\\Users\\andre\\AppData\\Local\\Programs\\Python\\Python312;${env.PATH}"
    }

    stages {

        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'https://github.com/AndrexeBeta/Cronoface_Cerradura.git'
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
}
