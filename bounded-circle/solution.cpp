#include <string>
#include <bits/stdc++.h>
#include <cmath>

#define NORTH 0
#define SOUTH 2
#define EAST 3
#define WEST 1

class Solution
{
    private:
    int x,y;
    char facing;
    void move(char instruction)
    {
        switch (instruction)
        {
            case 'G':
                if(facing == NORTH)
                    x++;
                else if(facing == WEST)
                    y++;
                else if(facing == SOUTH)
                    x--;
                else //EAST
                    y--;
                break;
            case 'L':
                facing = (facing + 1) % 4;
                break;
            case 'R':
                facing = (facing + 3) % 4;
                break;
            default:
                ;
        }
    }

    public:
    Solution()
    {
        x = y = facing = 0;
    }
    bool isRobotBounded(std::string instructions)
    {
        x = y = facing = 0;

        for(int i = 0; i < instructions.size(); i++)
        {
            move(instructions[i]);
        }
        return (( !x && !y ) || facing);
    }
};