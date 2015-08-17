//INDEPENDENT MODULE

//----------------------------------------------------

//FILE LIST
//"anwar_head.h" holds list of common headers across files
//"fwd_decl.h" holds forward declarations
//"format.cpp" holds definitions of functions used for console formatting
//"ind_mdl.cpp" holds independent functions used for various purposes
//"pck_mdl.cpp" holds list of packages and information on how to install them and change the .vimrc accrodingly

//RUNNING THE PROGRAM
//Navigate to the directory containing all the necessary files in the console
//Use the command " g++ anwar.cpp anwar_head.h fwd_decl.h format.cpp ind_mdl.cpp pck_mdl.cpp " in console
//execute the file names 'a.out' using " ./a.out " command in console

//----------------------------------------------------

//SUMMARY (list and syntax of function this contains)

//char func_validPrompt(int, std::string)  :  RECEIVES A VAILD INPUT FROM THE USER (AND RETURNS IT)
//void func_writeVIM(std::string)  :  WRITES TO THE .vimrc FILE IN THE CURRENT DIRECTORY
//bool func_internetAvail()  :  CHECKS INTERNET AVAILIBILITY (AND RETURNS THE TRUTH VALUE)

//----------------------------------------------------

#include"anwar_head.h"

//----------------------------------------------------
namespace namespace_def
{
	void func_help(int help_code)
	{	
		if (help_code==::namespace_def::HELP_VIM)
		{
			using namespace_format::func_print;
		
			func_print(0, "Definitions for the listed tools are:", 1);

			func_print(0, "VIM:", 0);
			func_print(0, "An open-source, powerful and configurable text editor.", 1);

			func_print(0, "Git:", 0);
			func_print(0, "A tool that allows developers to share their code across the world.", 1);

			func_print(0, "cURL:", 0);
			func_print(0, "A tool that allows you to download content through URLs from the Command Line", 1);

			func_print(0, "Pathogen:", 0);
			func_print(0, "A tool that allows you to easily  add plugins to the VIM text-editor", 0);
		}
		else if (help_code==::namespace_def::HELP_PROJECT)
		{
			using namespace_format::func_print;

			func_print(0, "Definitions for the listed tools  are:", 1);

			func_print(0, "NERDTree:", 0);
			func_print(0, "A tree explorer plugin for navigating the filesystem.", 1);

			func_print(0, "vtreeexplorer:", 0);
			func_print(0, "A tree based file explorer.", 1);

			func_print(0, "project:", 0);
			func_print(0, "This gives you a 'project' view of files, rather than a straight file system view.", 1);

			func_print(0, "ide:", 0);
			func_print(0, "Tracks files status (open/edited/closed/read only) within a project with icons.", 0);
			func_print(0, "It also automatically builds and updates syntax highlight rules based on the project files (C/C++/Java).", 0);
			func_print(0, "Moreover, it helps avoids buffer duplication.", 0);
		}
		else if (help_code==::namespace_def::HELP_BUFFER)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
		}
		else if (help_code==::namespace_def::HELP_CODE)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
			
		}
		else if (help_code==::namespace_def::HELP_CODEWRITE)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
			
		}
		else if (help_code==::namespace_def::HELP_FUNCT)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
		
		}
		else if (help_code==::namespace_def::HELP_COMPL)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
		
		}
		else if (help_code==::namespace_def::HELP_INTEG)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
	
		}
		else if (help_code==::namespace_def::HELP_THEMES)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
	
		}
		else if (help_code==::namespace_def::HELP_LANG)
		{
			using namespace_format::func_print;
		
			func_print(0, "Please refer to the following link as the Help module is under construction:", 1);
			func_print(0, "http://vim.wikia.com/wiki/Use_Vim_like_an_IDE", 0);
		
		}
		else
		{
			using namespace_format::func_print;
		
			func_print(0, "ERROR:", 0);
			func_print(0, "Please report the error at prabal.gupta.97@gmail.com.", 0);
		}
	}
}

//RECEIVES A VALID INPUT FROM THE USER
//func_validPrompt(number_of_options, message_to_print)
char func_validPrompt(int values, std::string prompt)
{
	//RESPONSE TO BE RECEIVED FROM USER
	char char_sol('A');
	
	if (values==3) //for inputting 'Yes', 'No', and 'Help'
	{
		//will repeat question unless valid input is received	
		while(char_sol!='Y' && char_sol!='y' && char_sol!= 'N' && char_sol!='n' && char_sol!='H' && char_sol!='h')
		{
	//printing the prompt asking for an input
		::namespace_format::func_print(1, prompt+"   ", -1);
		std::cin>>char_sol;
		}
	}
	else //for any values except '3', the function defaults to asking for simply two values i.e. 'Yes' or 'No'
	{
		//will repeat question unless valid input is received
		while( (char_sol!='Y') && (char_sol!='y') && (char_sol!='N') && (char_sol!='n') )
		{
			::namespace_format::func_print(1, prompt+"   ", -1);
			std::cin>>char_sol;
		}
	}
	//FUNCTION RETURNS THE VALID INPUT RECEIVED FROM THE USER
	return char_sol; 
}

//BAD FUNCTION
//returns recursive results when 'char' is inputted
//RECEIVES A VAILD NUMBER INPUT FROM THE USER
//func_validInput(number_of_options, message_to_print)
/*
int func_validInput(int range, std::string prompt)
{
	//RESPONSE TO BE RECEIVED FROM USER
	int int_sol(0);

	while ( !((int_sol>0)&&(int_sol<=range)) )
	{
	//printing a prompt asking for an input
		::namespace_format::func_print(1, prompt+"   ", -1);
		std::cin>>int_sol;
	}

	//FUNCTION RETURNS THE VALID INPUT RECEIVED FROM THE USER
	return int_sol;
}
*/

//RECEIVES A VAILD INPUT FROM THE USER AND RETURNS IT AS CHAR TO PREVENT ERRORS
//LIMITED TO VALUES FROM 0 to 9
//func_validInput(number_of_option, message_to_print)
int func_validInput2(int range, std::string prompt)
{
	//RESPONSE TO BE RECEIVED FROM USER
	char int_sol(0);
	int num=0;

	while(!((num>0)&&(num<=range)))
	{
	//prompting user to input a value
		::namespace_format::func_print(1, prompt+"   ", -1);
		std::cin>>int_sol;

	//converts '1' to 1 and '2' to 2 and so on for ten numbers...
		
		switch (int_sol)
		{
			case '0':
				num=0; break;
			case '1':
				num=1; break;
			case '2':
				num=2; break;
			case '3':
				num=3; break;
			case '4':
				num=4; break;
			case '5':
				num=5; break;
			case '6':
				num=6; break;
			case '7':
				num=7; break;
			case '8':
				num=8; break;
			case '9':
				num=9; break;
		}
	}	

	//FUNCTION RETURNS THE VALID INPUT RECEIVED FROM THE USER
	return num;
}

//APPENDS STRINGS TO .vimrc FILE
//func_writeVIM(input_string_here)	
void func_writeVIM(std::string string_VIMwrite)
{
	std::ofstream outfile;

//writes the input string to the file
	outfile.open(".vimrc", std::ios_base::app);
	outfile<<"\n"<<string_VIMwrite<<"\n";
}

//APPENDS STRINGS TO .vimrc FILE
//To be used for adding the names of plugins installed/updated in the list
//func_writeLIST(input_string_here)
void func_writeLIST(std::string string_LISTwrite)
{
	std::ofstream outfile;

//writes the input string to the file
	outfile.open("list.txt", std::ios_base::app);
	outfile<<"\n"<<"Installed/Updated "<<string_LISTwrite<<"\n";
}

//CHECKS INTERNET AVAILIBILITY
//func_internetAvail()
bool func_internetAvail()
{
	if (!system("ping -c1 -s1 www.github.com"))
	{
	        ::namespace_format::func_print(0,   "Internet seems to be working.", 0);
	}
	else
	{
		::namespace_format::func_print(0,   "Internet DOES NOT seem to be working.", 0);		
		::namespace_format::func_print(0,   "Please check your connection settings and restart 'Anwar'.", 0);
		
		return 0;	
	}

return 1;
}

//----------------------------------------------------

