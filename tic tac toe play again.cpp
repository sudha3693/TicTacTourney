#include<iostream>
using namespace std;
 
	char board [3][3] = {{ '1','2','3'},{'4','5','6'},{'7','8','9'}};
	char turn = 'X';
	int row,column;
	bool draw=false;
	
	void reset_board() {
    char num = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = num++;
    turn = 'X';
    draw = false;
}
	 
	 
	void display_board()
 	{
  system("cls");

	
	cout<<"\n\n     Tic Tac Toe GAME"<<endl<<endl;
	cout<<"\tplayer1[X]"<<endl<<"\tplayer2[O]"<<endl<<endl<<endl;
	
	 
    cout<<"\t\t       |       |       "<<endl;
	cout<<"\t\t   "<<board[0][0]<<"   |   "<<board[0][1]<<"   |   "<<board[0][2]<<"   "<<endl;
	cout<<"\t\t_______|_______|_______"<<endl;
	cout<<"\t\t       |       |       "<<endl;
	cout<<"\t\t   "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<"   "<<endl;
	cout<<"\t\t_______|_______|_______"<<endl;
	cout<<"\t\t       |       |       "<<endl;
	cout<<"\t\t   "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<"   "<<endl;
    cout<<"\t\t       |       |       "<<endl;
}
 void player_turn()
 {
 
 		int choice;
 	  
 		if(turn == 'X')
  	cout<<"\n\tplayer1[X] turn : ";
 
  
 if(turn == 'O')
  cout<<"\n\tplayer2[O] turn : ";
 
 cin>>choice;
 
 switch(choice)
 {
 	case 1: row=0; column=0; break;
 	case 2: row=0; column=1; break;
 	case 3: row=0; column=2; break;
 	case 4: row=1; column=0; break;
 	case 5: row=1; column=1; break;
 	case 6: row=1; column=2; break;
 	case 7: row=2; column=0; break;
 	case 8: row=2; column=1; break;
	case 9: row=2; column=2; break;

	default:
	cout<<"invalid sitution"<<endl;
	break;
	}
	if(turn=='X' && board[row][column]!='X'  && board[row][column]!='O')
	{
		board[row][column]='X';
		turn='O';
	}
	else if(turn=='O'&& board[row][column]!='O'  && board[row][column]!='X')
	{
		board[row][column]='O';
		turn='X';
	}
	else
	{
		cout<<"Box is already failed ! \n TRY AGAIN!! \n \n";
		player_turn();
	}
 	display_board();
}
bool Game_over()
{
	//check win
	for(int i=0; i<3; i++)
	if(board[i][0] == board[i][1]  && board[i][0] == board[i][2] || board[0][i] == board[1][i]  && board[0][i] == board[2][i])
		return false;
		if(board[0][0] == board[1][1]  && board[0][0] == board[2][2] || board[0][2] == board[1][1]  && board[0][2] == board[2][0] )
		return false;
	
	//if there any box not failed
	for(int i=0; i<3; i++)	
	for(int j=0; j<3; j++)
	if(board[i][j] != 'X' && board[i][j] != 'O')
	return true;
	
	
	//game draw
	draw=true;
	return false;	
		
}

 int  main()
{
	char play_again;
	do{
		 reset_board();
	
 while(Game_over())
 {
 	display_board();
	player_turn();
    Game_over();
 }
 if(turn == 'X' && draw==false)
 cout<<"Player2 [O] Wins!! Congratulations\n";
 
 else if(turn == 'O' && draw==false)
 cout<<"Player1 [X] Wins!! Congratulations\n";
 
 else
 cout<<"GAME DRAW !! "<<endl;
 
  cout << "\n Do you want to play another game: Y/N ";
        cin >> play_again;
    } while (play_again == 'Y' || play_again == 'y');

return 0;
}
