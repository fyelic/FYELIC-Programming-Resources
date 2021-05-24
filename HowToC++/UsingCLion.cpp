int main() {
    //How to navigate CLion

    /*
     * CLion is an Integrated Development Environment (IDE) for C++. As far as we're
     * concerned for Cornerstone or GE 1110/11, it's a tool that we use to write
     * and run C++ code. This file covers the basics of CLion and the main features
     * of the IDE that you'd use for your assignments. C++ specific topics
     * are covered in the other modules.
     */


    //Running vs building your project
    /*
     * When you have your program typed here in <int main()>, you can simply hit the
     * green arrow in the top right of your screen to run your program.
     *
     * Hitting the green hammer button will build your project, essentially just checking
     * for syntax errors or other problems that will prevent your code from running.
     *
     * The green hammer and green arrow icons are really the only tools from the top bar
     * that you'd need for this course.
     */


    //Auto-format
    /*
     * Has your code gotten extremely messy? Mismatched brackets? Lines that shouldn't be
     * tabbed are tabbed and vice versa? CLion has a nice reformatting feature to help.
     *
     * From the menu bar, go to
     * Code > Reformat Code
     * or
     * Windows: Ctrl + Alt + L
     * Mac: Option + Command + L
     *
     * If you don't select any text, doing this will format the whole file, but if you
     * want to format a specific code block, just highlight the code and do the above.
     */


    //Commenting
    // Single line comment
    //int index = 0;

    //Block comment: use /* to start the comment and */ to end the comment
    /*
    for (int i = 0; i < 4; i++) {
        cout << i << endl;
    }
     */

    //Alternative block comment: highlight text then press
    //Windows: Ctrl + /
    //Mac: Command + /
//    int num1 = 1;
//    int num2 = 2;
//    cout << num1 << " " << num2 << endl;

    //Writing a block comment: type /* then enter
    /*
     * Doing this auto generates the *s at the beginning of new lines
     */


    //Gray text
    /*
     * Unused variables or function names will be gray until they are used somewhere in
     * your main().
     */


    //Errors
    /*
     * Discovering and debugging errors in your program takes time and experience. You might
     * be scratching your head for hours wondering why your program won't build or run when
     * it simply comes down to a missing semicolon or a typo'd variable.
     *
     * The error message at the bottom of your screen after running your program often points
     * to a specific line number in the form
     * /Users/user/ProjectName/main.cpp:LINE_NUMBER:COLUMN_NUMBER
     * and will often times say exactly what the error is. Sometimes it uses technical and
     * confusing terms, but if you can at least note the line number it helps.
     *
     * Red squiggly lines may also appear as you're typing. You can hover your cursor over
     * the line, and it will give a quick description of the error.
     */


    //Pop-up text
    /*
     * You might notice that CLion will generate suggested text as you're typing your
     * program. These might include variable names or other commonly used pieces of code.
     * You can hit the tab key to use the code suggestion, or just keep typing to ignore it.
     */


    //Files and folders
    /*
     * To the left of your code, there's a project directory with a bunch of files and folders
     * like cmake-build-debug or CMakeLists.txt. For our purposes, the main items you'll need to
     * note are main.cpp, and possibly other files if you're reading in or writing to a .txt file.
     * The input/output files should be in the cmake-build-debug folder, and can be viewed by
     * simply double clicking.
     */

    return 0;
}