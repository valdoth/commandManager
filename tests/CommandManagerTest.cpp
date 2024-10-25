// // #include <gtest/gtest.h>
// // #include "../include/MoveCommand.h"

// // TEST(MoveCommandTest, ExecuteTest) {
// //     MoveCommand cmd;
// //     testing::internal::CaptureStdout();
// //     cmd.execute();
// //     std::string output = testing::internal::GetCapturedStdout();
// //     EXPECT_EQ(output, "Executing Move Command...\n");
// // }

// // TEST(MoveCommandTest, UndoTest) {
// //     MoveCommand cmd;
// //     testing::internal::CaptureStdout();
// //     cmd.undo();
// //     std::string output = testing::internal::GetCapturedStdout();
// //     EXPECT_EQ(output, "Undo Move Command...\n");
// // }



// #include <gtest/gtest.h>
// #include <thread>

// #include "../src/CommandManager.h"
// #include "../src/MoveCommand.h"
// #include "../src/UpdateInventoryCommand.h"


// TEST(CommandManagerTest, ExecuteCommands) {
//     auto manager = CommandManager::getInstance();
//     manager->addCommand(std::make_unique<MoveCommand>());
//     manager->addCommand(std::make_unique<UpdateInventoryCommand>());

//     // Vérification des exécutions sans erreurs
//     ASSERT_NO_THROW(manager->executeCommands());
// }

// TEST(CommandManagerTest, StartAndStopMonitoring) {
//     auto manager = CommandManager::getInstance();
//     manager->startMonitoring();
//     std::this_thread::sleep_for(std::chrono::seconds(2));
//     manager->stopMonitoring();

//     // Vérification que le monitoring se termine correctement
//     ASSERT_NO_THROW(manager->stopMonitoring());
// }
