/*Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
}*/

int lengthOfLastWord(char* s) {
    int count=0;
    if(*s==32)s++;
    while(*s!='\0'){
        if(*s==32 && *(s+1)=='\0')break;
        else if(*s==32 && *(s+1)!='\0' && *(s+1)!= 32)count=0;
        else if(*s==32 && *(s+1)== 32)count+=0;
        else count++;
        s++;
    }
  
    return count;
}