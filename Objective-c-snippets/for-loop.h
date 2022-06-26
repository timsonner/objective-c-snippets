//
//  for-loop.h
//  Objective-c-snippets
//
//  Created by Timothy Sonner on 6/26/22.
//

#ifndef for_loop_h
#define for_loop_h
// insert code here...

void demonstrateForLoop(int a, char *b) {
    // a is the "formal" value of userInputLoopAsInt from demonstrateUserInput()
    // b is the "formal" value of userInputName from demonstrateUserInput()
    // notice we dereferenced pointer b to get its value, not its memory address
    int i; // initialize our counter
    for (i = 1; i <= a; i++) {
        NSLog(@"Loop %d: Hello, %s\n", i, b);
    }
}

#endif /* for_loop_h */
