#include <CommandParser/CommandParser.h>
#include <_RoverControllerMock/RoverControllerMock.h>
#include <gmock/gmock.h>

using namespace testing;

TEST(CommandParserTest, GivenMWhenExecuteCommandThenMoveForwardIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, MoveForward()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "M");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenLWhenExecuteCommandThenTurnLeftIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, TurnLeft()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "L");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenRWhenExecuteCommandThenTurnRightIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, TurnRight()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "R");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenMMRWhenExecuteCommandThenExpectedFunctionsAreCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, MoveForward()).Times(2);
    EXPECT_CALL(mockRover, TurnRight()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "MMR");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenLMMRMWhenExecuteCommandThenExpectedFunctionsAreCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, MoveForward()).Times(3);
    EXPECT_CALL(mockRover, TurnRight()).Times(1);
    EXPECT_CALL(mockRover, TurnLeft()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "LMMRM");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenLMMRMRRLWhenExecuteCommandThenExpectedFunctionsAreCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, MoveForward()).Times(3);
    EXPECT_CALL(mockRover, TurnRight()).Times(3);
    EXPECT_CALL(mockRover, TurnLeft()).Times(2);
    bool status = commander.ExecuteCommand(mockRover, "LMMRMRRL");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenLowercaseMWhenExecuteCommandThenMoveForwardIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, MoveForward()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "m");
    EXPECT_TRUE(status);
}


TEST(CommandParserTest, GivenLowercaseLWhenExecuteCommandThenTurnLeftIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, TurnLeft()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "l");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenLowercaseRWhenExecuteCommandThenTurnRightIsCalled)
{
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    EXPECT_CALL(mockRover, TurnRight()).Times(1);
    bool status = commander.ExecuteCommand(mockRover, "r");
    EXPECT_TRUE(status);
}

TEST(CommandParserTest, GivenXWhenExecuteCommandThenFalseIsReturned)
{
    // TODO: One simple test for now, should improve to provide some kind of useful error
    Rover::CommandParser commander;
    NiceMock<RoverControllerMock> mockRover;
    bool status = commander.ExecuteCommand(mockRover, "X");
    EXPECT_FALSE(status);
}