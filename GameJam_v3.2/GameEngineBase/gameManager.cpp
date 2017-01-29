#include "gameManager.h"

#include <iostream>

GameManager::GameManager()
{
	//Initializing 
	isTwoPlayer = false;
	player1.id = -1;
	player1.lapCount = 0;
	player1.recentCheckpoint = 1;
	player1.elapsedTime = 0.0f;

	player2.id = -1;
	player2.lapCount = 0;
	player2.recentCheckpoint = 1;
	player2.elapsedTime = 0.0f;


	gameStatus = "STARTED";



};


GameManager::~GameManager()
{


}

void GameManager::processAtCheckpoint(int checkpointId, int playerId)
{

	if(gameStatus == "STARTED")
	{
	if(playerId == player1.id)
	{
		if(checkpointId == 2 && player1.recentCheckpoint == 1)
		{
			player1.recentCheckpoint = 2;
		}
		else if(checkpointId == 1 && player1.recentCheckpoint == 2)
		{
			player1.recentCheckpoint = 1;
			player1.lapCount++;
		}
		else
		{
			std::cout<<"Wrong direction"<<std::endl;
			
		}
	
	
	}
	else if(playerId == player2.id)
	{
		if(checkpointId == 2 && player2.recentCheckpoint == 1)
			{
				player2.recentCheckpoint = 2;
			}
			else if(checkpointId == 1 && player2.recentCheckpoint == 2)
			{
				player2.recentCheckpoint = 1;
				player2.lapCount++;
			}
			else
			{
				std::cout<<"Wrong direction"<<std::endl;
			}
	}
			std::cout<<"player 1: at CheckPoint"<<player1.recentCheckpoint<< " and Completed laps : " <<player1.lapCount<<std::endl;

			if(isTwoPlayer)
				{	
					std::cout<<"player 2: at CheckPoint"<<player2.recentCheckpoint<< " and Completed laps : " <<player2.lapCount<<std::endl;
				if(player1.lapCount ==2 || player2.lapCount == 2)
				{
					checkLeader();
			
				}

			}


	}

}

void GameManager::checkLeader()
{
	if(isTwoPlayer)
	{
		if(player1.lapCount > player2.lapCount)
		{
			//Player 1 leads OBV
			this->leaderId = player1.id;
		}
		else if(player1.lapCount < player2.lapCount)
		{
			//Player 2 leads OBV
			this->leaderId = player2.id;
		}
		else
		{
		//Lap count is same , check last checkpoint crossed
			if(player1.recentCheckpoint > player2.recentCheckpoint)
			{
			//Player 1 leads OBV
			this->leaderId = player1.id;
			}
			else if(player1.recentCheckpoint < player2.recentCheckpoint)
			{
			//Player 2 leads OBV
			this->leaderId = player2.id;
			}
			else
			{
			//Everything is same
			
			}
		
		
		}

		
		if(player1.id == leaderId)
		{
			std::cout<<"Player 1 is the winner"<<std::endl;
			gameStatus = "GAMEEND";
		}
		else
		{
			std::cout<<"Player 2 is the winner"<<std::endl;
			gameStatus = "GAMEEND";


		}



	}
	else
	{
		//Single player so he will always be the leader
		this->leaderId = player1.id;


	}

}