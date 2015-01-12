IF YOUR FILE IS MODERATELY LARGE, YOU ALSO CAN USE "splt_new.cpp"  insted of splt.cpp.It also prints some additional informations in screen. But this splt_new.cpp and splt.cpp are similar.
In splt_new.cpp we need to calculate the value of input.
It will aks you  PLEASE ENTER THE NAME OF INPUT FILE: your answer is  for example "test.doc". It will provide you the 
 size of your input file(in bytes) eg: "SIZE_OF_INPUT_FILE = 361".  Decide how many file or what size of file you want to make. the use formula
 It will ask "What should be the size of the splitted files ? please writ in bytes" answer is , for example(1) 36. After this it will request for number of files
 At this point be carefile: The formula for this number should be (SIZE_OF_INPUT_FILE/size_of_each_output_files)
 NOTE (1):. ..  If (SIZE_OF_INPUT_FILE/size_of_each_output_files) = integer,  then enter integer+1: for example(2) SIZE_OF_INPUT_FILE=500 and
 size_of_each_output_files=50 then 500/50=10, which is integer so enter 11.(11 is 10+1)
NOTE(2):..... If (SIZE_OF_INPUT_FILE/size_of_each_output_files) = noninteger,then enetr a integer 2 more then it . 
 for example , in the above example(1) this number is 361/36 = 10.027. This is a noninteger value so enter 12, which just 2 integer larger then 10.027.
 in later case (NOTE(2), the WARNING:::::lastmost file could have nothing, it may be empty or unwanted. So please open that file. You should actually have 10 files and 11th file may be oke or not.
