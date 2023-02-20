#ifndef BRACKETS_H
#define BRACKETS_H

#include "Stack.h"

/*
A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].
Two brackets are considered to be a matched pair if an opening bracket (i.e., (, [, or {) occurs to the left of a 
closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().
A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is 
not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, 
unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].
By this logic, we say a sequence of brackets is balanced if it contains no unmatched brackets.
Write a function that accepts a string of brackets and determines whether the sequence of brackets is balanced or not. 
If the string is balanced, return YES. Otherwise, return NO.

Example: 
"{()}[]" -> true (balanced)
"{[(])}" -> false (not balanced)
*/

bool areBracketsBalanced(string expr) {
    char *curr = &expr[0];
    Stack<char> openers;
    
    while (*curr != '\0')
    {
        if (*curr == '(') openers.push('(');
        if (*curr == '{') openers.push('{');
        if (*curr == '[') openers.push('[');
        
        if (*curr == ')')
        {
            if (openers.isEmpty()) return false;
            
            if (openers.pop() != '(') return false;
        }    
        
        if (*curr == '}')
        { 
            if (openers.isEmpty()) return false;
            
            if (openers.pop() != '{') return false;
        }
        
        if (*curr == ']')
        {
            if (openers.isEmpty()) return false;
            
            if (openers.pop() != '[') return false;
        }
        
        
        curr++;    
    }
    
    if (openers.isEmpty()) return true;
    
    return false;
    
}

#endif //BRACKETS_H