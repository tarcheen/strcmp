/* Implementing strcmp in c++ */

#ifndef gaurd
#define gaurd

#include <iostream>

int strcmpre(const char* word1,const char* word2)
{
    //check first characters of both words. if different we return 1 or -1
    if(*word1 > *word2)
        return 1;
    
    else if(*word1 < *word2)
        return -1;
    
    // first character is same, lets iterate through remaining characters
    for (int i = 0; i < strlen(word1) && i < strlen(word2) ; ++i)
    {
        
        if(word1[i] > word2[i])
            return 1;
        
        else if(word1[i] < word2[i])
            return -1;
        
    }
    
    // all characters are same, lets see if one word is larger than other
    if(strlen(word1) > strlen(word2))
        return -1;
    
    else if(strlen(word1) < strlen(word2))
        return 1;
    // length is equal, thus same word
    else
        return 0;
}

int main()
{
    std::cout<<strcmpre("abcd","abbd")<<std::endl;
}

#endif
