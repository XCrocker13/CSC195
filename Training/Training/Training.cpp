
#include <iostream>
#include "Item.h"
#include "Player.h"
using namespace std;

int findMax(int x, int y);
double calculateAverage(int x, int y, int z);

int main()
{
 //   int a = 4;
 //   int b = 5;
 //   int c = 6;

 ///*   cout << findMax(a,b);*/
 //   cout << calculateAverage(a,b,c);

 //   Player player;
 //   player.setName("Meek");
 //   player.setScore(3000);
 //   player.display();
 //   player.isHighScorer();
 //   return 0;
    Item item;
    item.setName("jo");
    item.setPrice(13.53);
    item.setQuantity(20);
    item.Display();
}

int findMax(int x, int y)
{
    if (x > y) {
        return x;
    }
    else
    {
        return y;
    }
}

double calculateAverage(int x, int y, int z) 
{
    return(x + y + z / 3);
}

