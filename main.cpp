#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2,P3;

	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);
	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Line Test ///
	/// ============== 
	pOut->PrintMessage("Drawing a Line, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	//Done ///TODO: Add code to draw Line, Normal and Highlighted 
	//2.2.1 - Drawing non-Highlighted Line
	pOut->PrintMessage("Drawing a Line, normal click two points");
	pIn ->GetPointClicked (P1.x,P1.y);
	pIn -> GetPointClicked (P2.x,P2.y);

	gfxInfo.BorderWdth =5;
	gfxInfo.DrawClr=BLACK;
	gfxInfo.isFilled = false;
	pOut -> DrawLine (P1,P2,gfxInfo,false);
	//2.2.2 - Drawing a Highlighted Line
	pOut->PrintMessage("Drawing a Line, Highlighted, Click to Highlight");
	pIn -> GetPointClicked (x,y);
	pOut -> DrawLine (P1,P2,gfxInfo,true);
	
	pOut->PrintMessage("Drawing a Line Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	//DONE///TODO: Add code to draw Triangle in all possible states
	//2.3.1  - Drawing a Triangle non-filled
	pOut-> PrintMessage ("Drawing a Triangle ==> Non-Filled Nor-Highlighted , click three points");
	pIn -> GetPointClicked(P1.x,P1.y);
	pIn -> GetPointClicked(P2.x,P2.y);
	pIn -> GetPointClicked(P3.x,P3.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut -> DrawTrig(P1,P2,P3,gfxInfo,false);

	//2.3.2 - Drawing a Triangle Highlited non-filled
	pOut->PrintMessage ("Drawing a Triangle ==>  Highlighted ,non-Filled, click anywhere to highlight");
	pIn->GetPointClicked (x,y);
	pOut->DrawTrig (P1,P2,P3,gfxInfo, true);
	//2.3.3 - Drawing a filled Triangle
	pOut->PrintMessage("Drawing a Triangle , Filled, click three points");
	   pIn -> GetPointClicked(P1.x,P1.y);
	   pIn -> GetPointClicked(P2.x,P2.y);
	   pIn -> GetPointClicked(P3.x,P3.y);

	   gfxInfo.BorderWdth = 6;
	   gfxInfo.DrawClr = BLUE;
	   gfxInfo.FillClr = GREEN;
	   gfxInfo.isFilled = true;
	   pOut->DrawTrig (P1,P2,P3,gfxInfo,false);
	  
	//2.3.4 - Drawing a Highlighted filled Triangle
	   pOut->PrintMessage ("Drawing a Triangle , Highlighted and Filled, click anywhere to highlight ");
	   pIn->GetPointClicked (x,y);
	   pOut->DrawTrig (P1,P2,P3,gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	/// 2.4- Circle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	//Done->///TODO: Add code to draw Circle in all possible states
	
	//2.4.1 - Drawing non-filled circle
	pOut -> PrintMessage ("Drawing a Circle ==> non-filled, CLick two points" );
	pIn -> GetPointClicked (P1.x ,P1.y);
	pIn -> GetPointClicked (P2.x , P2.y);

	gfxInfo.BorderWdth =5;
	gfxInfo.DrawClr = BLACK;
	gfxInfo.isFilled = false;
	pOut -> DrawCirc(P1,P2,gfxInfo, false);
	//2.4.2 - Drawing non-filled circle highlighted
	pOut -> PrintMessage ("Drawing a Circle ==> highlighted non-filled, CLick to Highlight" );
	pIn ->GetPointClicked (x,y);
	pOut -> DrawCirc(P1,P2,gfxInfo, true);
	//2.4.3- Drawing a filled circle
		pOut -> PrintMessage ("Drawing a Circle ==> filled, CLick two points" );
		pIn -> GetPointClicked (P1.x ,P1.y);
	    pIn -> GetPointClicked (P2.x , P2.y);

	gfxInfo.BorderWdth =6;
	gfxInfo.DrawClr = GREEN;
	gfxInfo.FillClr = BLUE;
	gfxInfo.isFilled = true;
	pOut->DrawCirc (P1,P2,gfxInfo, false);
	//2.4.4- Drawing a highlighted filled circle
		pOut -> PrintMessage ("Drawing a Circle ==> a Highlighted filled, CLick to highlight" );
		pIn -> GetPointClicked (x,y);
		pOut-> DrawCirc (P1,P2,gfxInfo,true);

	pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	pOut->PrintMessage("Testing Input ability to read strings");

	pOut->ClearStatusBar();
	string test = pIn->GetSrting(pOut) ;
	pOut->PrintMessage("You Entered "+test+",click anywhere");
	//pIn->GetPointClicked(x,y);
	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the stirng clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	
	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
				pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
				break;

		case DRAW_LINE:
				pOut->PrintMessage("Action: Draw a Line , Click anywhere");
				break;

		case DRAW_CIRC:
				pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
				break;

		case DRAW_TRI:
				pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
				break;

		case CHNG_DRAW_CLR:
				pOut->PrintMessage("Action: Change the drawing color , Click anywhere");
				break;

		case CHNG_FILL_CLR:
				pOut->PrintMessage("Action: Change background color , Click anywhere");
				break;
		case CHNG_CLR_BLACK:
				pOut->PrintMessage("Action: Change color to black , Click anywhere");
				break;
		case CHNG_CLR_WHITE:
				pOut->PrintMessage("Action: Change color to white , Click anywhere");
				break;
		case CHNG_CLR_RED:
				pOut->PrintMessage("Action: Change color to red , Click anywhere");
				break;
		case CHNG_CLR_BLUE:
				pOut->PrintMessage("Action: Change color to blue , Click anywhere");
				break;
				case CHNG_CLR_GREEN:
				pOut->PrintMessage("Action: Change color to green , Click anywhere");
				break;
		case STATUS:
				pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
				break;
 
		case DRAWING_AREA:
				pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
				break;

		case EMPTY:
				pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
				break;
		case DEL :
			pOut->PrintMessage("Action : delete the selected item ,click anywhere ");
			break;
		case SAVE :
			pOut->PrintMessage("Action : save the drawing project ,click anywhere ");
			break;
		case LOAD :
			pOut->PrintMessage("Action : load an existing project , click anywhhere ");
			break;
		case MOVE :
			pOut->PrintMessage("Action : move the selected item , click anywhere ");
				break;
		case TO_DRAW:
				pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
				pOut->CreateDrawToolBar();
				break;

		case TO_PLAY:
				pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
				pOut->CreatePlayToolBar();
				break;
		case PLAY_SHAPE:
				pOut->PrintMessage("Action: select similar shapes, click anywhere");
			break;
		case PLAY_CLR:
				pOut->PrintMessage("Action:select similar colors, click anywhere");
			break;
		case PLAY_BOTH:
				pOut->PrintMessage("Action: select the same item with the same color, click anywhere");
			break;
		case PLAYING_AREA:
			pOut->PrintMessage("Action: a click on the playing area, click anywhere");
			break;




		case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


