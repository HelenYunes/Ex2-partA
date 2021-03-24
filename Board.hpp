#include <string>
#include <unordered_map>
#include "Direction.hpp"

using namespace std;

namespace ariel
{
    class Board
    {
        uint min_row;
        uint max_row;
        uint min_column;
        uint max_column;
        unordered_map<uint, unordered_map<uint, char>> board;

    public:
        Board()
        {
            max_row = max_column = 0;
            min_row = min_column = UINT8_MAX;
        }
        ~Board() {}
        void post(uint row, uint column, Direction direction, string message);
        std::string read(uint row, uint column, Direction direction, uint length);
        void show();
    };
}