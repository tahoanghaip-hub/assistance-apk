pluginManagement {
    repositories {
        google()
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.PREFER_SETTINGS)
    repositories {
        google()
        mavenCentral()
        flatDir {
            dirs("${rootDir}/unityLibrary/libs")
        }
    }
}

rootProject.name = "MoraAssistant"
include(":app")
include(":unityLibrary")