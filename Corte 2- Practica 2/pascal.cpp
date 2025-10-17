#include <vector>
#include <iostream>

class Solution
{
public:
    std::vector<std::vector<int>> generate(int numRows) 
    {
        std::vector<std::vector<int>> result;

        if (numRows == 0)
        {
            return result;
        }
        
        result.push_back({1});
        
        for (int i = 1; i < numRows; i++)
        {
            std::vector<int> prevRow = result[i - 1];
            std::vector<int> newRow;            
            newRow.push_back(1);            
            for (int j = 1; j < i; j++)
            {
                newRow.push_back(prevRow[j - 1] + prevRow[j]);
            }
            newRow.push_back(1);            
            result.push_back(newRow);
        }
        
        return result;
    }
};

int main()
{
    Solution solution;
    
    int numRows;
    std::cout << "Numero de Fila: ";
    std::cin >> numRows;
    
    if (numRows < 0)
    {
        std::cout << "Ingrese un numero positivo de filas." << std::endl;
        return 1;
    }
    
    std::vector<std::vector<int>> triangle = solution.generate(numRows);
    
    for (const auto& row : triangle)
    {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
