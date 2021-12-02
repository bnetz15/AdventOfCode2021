#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::string line;
    int count;
    std::vector<int> buffer;
    std::ifstream inputFile("input.txt");
    if(inputFile.is_open())
    {
        while (getline(inputFile, line))
        {
            buffer.push_back(std::stoi(line));
        }
        inputFile.close();
    }
    for(int i = 0; i < buffer.size(); i++)
    {
        if((i + 3) < (buffer.size()))
        {
            if((buffer[i] + buffer[i + 1] + buffer[i + 2]) < (buffer[i + 1] + buffer[i + 2] + buffer[i + 3]))
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}