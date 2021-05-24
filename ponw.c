#include <string>
#include <stdtime>
#include <time>
#include <random>
using namespace std;
/* this code shouldn't result in doing anything that you see right now. This currently is just what the computer does, it sets a randomized string of letters. I am going to write the mining part next, but wanted to show what a fail-safe script would look like since I don't have API keys for the twitter firehose yet. Those aren't easy to get.
   even writing the miner part for this will take me sometime.
 I would like the finished version to not just use randomized letters, but also have a much big, many words dictionary so the words are chosen at random in the script or the words are chosen from a tweet via the api....
*/
char alfieRandom (){
    string randomize(length){
        string randomalfie;
        const char alfiebet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        // decided to add some uniqueness to the naming variable for alphabet.
        srand(time(0));
        int n = rand() % 52;
        char setalfie = (char)(n+65);

        for (int i = 0; i < length; ++i) {
            randomalfie += alfiebet[rand() % (sizeof(alfiebet) - 1)];
    }
    return alfiedog = randomalfie; // the shiba inus name should be alfie.
  }
}

int miner(){
    while(1){
      char token;
      int won;
      alfiedog = alfieRandom();
       
      while(1){
         token = alfieRandom();
         if (token==alfiedog){
            won++;
            break;
         }
         
      }
   }
}

int main(){
   miner();
}
