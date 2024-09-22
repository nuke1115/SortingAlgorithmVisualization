#include "..\header\Application.hpp"
#include <string>

int main()
{
    int width = 1024, height = 576, baseSize = 4;
    std::string name = "SortingAlgorithmVisualizationProgram";
    Application app(width,height,name, baseSize);
    
    if (!app.Initialize(baseSize))
    {
        app.Run();
    }

    return 0;
}