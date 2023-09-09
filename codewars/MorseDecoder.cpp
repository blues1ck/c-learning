#include <iostream>
#include <map>

char letter(std::string MorseWord){
    std::map<std::string, char> letters;
    std::string str ="ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    for (int i = 0; i < str.length(); i++){
        switch(i){
            case 0:  letters[".-"]   = str[i]; break;
            case 1:  letters["-..."] = str[i]; break;
            case 2:  letters["-.-."] = str[i]; break;
            case 3:  letters["-.."]  = str[i]; break;
            case 4:  letters["."]    = str[i];break;
            case 5:  letters["..-."] = str[i]; break;
            case 6:  letters["--."]  = str[i];break;
            case 7:  letters["...."] = str[i]; break;
            case 8:  letters[".."]   = str[i];break;
            case 9:  letters[".---"] = str[i]; break;
            case 10: letters["-.-"]  = str[i]; break;
            case 11: letters[".-.."] = str[i]; break;
            case 12: letters["--"]   = str[i]; break;
            case 13: letters["-."]   = str[i];break;
            case 14: letters["---"]  = str[i]; break;
            case 15: letters[".--."] = str[i]; break;       
            case 16: letters["--.-"] = str[i]; break;
            case 17: letters[".-."]  = str[i]; break;
            case 18: letters["..."]  = str[i]; break;
            case 19: letters["-"]    = str[i];   break;
            case 20: letters["..-"]  = str[i]; break;
            case 21: letters["...-"] = str[i]; break;
            case 22: letters[".--"]  = str[i]; break;
            case 23: letters["-..-"] = str[i]; break;
            case 24: letters["-.--"] = str[i]; break;
            case 25: letters["--.."] = str[i]; break;
            case 26: letters[" "]    = str[i]; break;                                      
        }
    }
    return letters[MorseWord];
}


std::string Decoder(std::string MorseCode){
    
    std::string res = "";
    std::string current = "";
    char previous = ' ';
    
    for (int i = 0; i < MorseCode.size(); ++i){
        if (MorseCode[i] == ' ' & previous != ' '){
            res += letter(current);
            current = "";
            previous = ' '; 
        }
        else if (MorseCode[i] == ' ' & previous == ' '){
            res += ' ';
            current = "";
            previous = 'a'; 
        }
        else{
            previous = 'a';
            current += MorseCode[i];
        }        
    }
    res += letter(current);
    return res;
}

int main(){
    std::cout << Decoder(".... . -.--   .--- ..- -.. .")<< "\n";    
}