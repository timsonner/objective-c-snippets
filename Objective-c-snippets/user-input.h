//
//  user-input.h
//  Objective-c-snippets
//
//  Created by Timothy Sonner on 6/26/22.
//

#ifndef user_input_h
#define user_input_h
// insert code here...

#import <readline/readline.h> // to use readline()
#import "for-loop.h" // to call demonstrateForLoop()

void demonstrateUserInput() {
    NSLog(@"What is your name? ");
    const char* userInputName = readline(NULL); // store user input in pointer userInputName
    NSLog(@"Address of userInputName:%p\n", &userInputName);
    NSLog(@"Value at userInputName is %s\n", userInputName);
    NSLog(@"How many times should the loop execute? ");
    const char* userInputLoop = readline(NULL); // stores user input in pointer userInputLoop
    int userInputLoopAsInt = atoi(userInputLoop); // convert ascii of userInputLoop to an integer value, or 0 if userInputLoop is a string or char.
    
    // Another way to accomplish casting userInput to an int
//            NSString *userInputLoop = [NSString stringWithUTF8String:readline(NULL)];
//            NSInteger userInputLoopAsInt = [userInputLoop integerValue];
    
    if (userInputLoopAsInt != 0) {
        NSLog(@"Loop will execute %d times.\n", userInputLoopAsInt);
        demonstrateForLoop(userInputLoopAsInt, userInputName); // send "actual" values of userInputLoop and userInputName as arguments to demonstrateForLoop()
    } else {
        NSLog(@"Loop will execute %d times.\n", userInputLoopAsInt);
        NSLog(@"User input must be a number or greater than 0.");
        demonstrateUserInput(); // user input was 0, a char, or a string. Return to user input prompt
    }
}

#endif /* user_input_h */
