cmake_minimum_required(VERSION 3.10)

project(commandManager)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajout des fichiers source
set(SOURCES
    src/MoveCommand.cpp
    src/UpdateInventoryCommand.cpp
    src/SensorMonitorCommand.cpp
    src/CommandManager.cpp
    src/main.cpp
)

# Création de l'exécutable principal
add_executable(${PROJECT_NAME} ${SOURCES})

# Ajout de la bibliothèque standard pour les threads
find_package(Threads REQUIRED)
target_link_libraries(${PROJECT_NAME} Threads::Threads)

# Ajout de Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Création des bibliothèques pour les commandes
add_library(CommandManager src/CommandManager.cpp)
add_library(MoveCommand src/MoveCommand.cpp)
add_library(UpdateInventoryCommand src/UpdateInventoryCommand.cpp)
add_library(SensorMonitorCommand src/SensorMonitorCommand.cpp)

# # Ajout du fichier de test
# add_executable(CommandManagerTest tests/CommandManagerTest.cpp)
# target_link_libraries(CommandManagerTest CommandManager MoveCommand UpdateInventoryCommand SensorMonitorCommand ${GTEST_LIBRARIES} pthread)

# # Ajouter le répertoire src au chemin d'inclusion
# include_directories(src)

# # Ajout de tests
# add_test(NAME CommandManagerTest COMMAND CommandManagerTest)
