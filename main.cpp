#include <QApplication>
#include <QStringList>
#include "fluidlauncher.h"

 
int main(int argc, char** argv)
{
    QStringList originalArgs;
 
    for (int i=0; i<argc; i++)  
      originalArgs << argv[i];

    QApplication app(argc, argv);
    FluidLauncher launcher(&originalArgs);


    return app.exec();
} 
