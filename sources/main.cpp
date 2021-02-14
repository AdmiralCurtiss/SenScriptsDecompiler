#include <QCoreApplication>

#include "headers/decompiler.h"
#include <QDir>

QString header[] = {".                           ,##(&%%@                                            ",
                    "          .           .  ..(##/%%%%%%%&. .                  ....                ",
                    "          .           (.../##/%%%##(%%%%%/,.....,*(/  .  (%#((%%/.              ",
                    "                  .. ....(##(%%%#(/#..............*#,....*&%%%%%&               ",
                    "                   /....####%%%%/....................*..//*..,/#%. .            ",
                    "                  (.,.*%##*%%%....... ..........................%%,             ",
                    "               . #.(.,#%%%%%(......... ...,,*,.....,,........... .#, .          ",
                    "                (.(,%(((%%%*.......,.*....*,.,.*.#............,. .., .          ",
                    "              .#.(#####%&%*.............,(.., .(#..,........,..*......          ",
                    "              (.(%#(/%%%%%.,..,..*...*.#,(*..#,(,(/..... ...#.........          ",
                    "             ,..(/%%%&%%%....(.....,*.(*(*..,.%/./*,........(.../..,..*         ",
                    "          .. *.,(/(%%%&%%.(.(.../.,#.*,*%./. *(,*(,.,......//,..(..,..(         ",
                    "           .(..,(.((&%%%*./##...(./*/,  #/./((*#((,(,...,./*.*.(/..,..(         ",
                    "          . ....(.#(((((.(,(/,..((#%@@@@&* **#%*#(%*...*.*,*%,#(......*.        ",
                    "          .(...,,/(((((%,,,/*...(,/.,#(&,/,@&(,/(/,.//((/ /**,#...*... .        ",
                    "         . ....,.#((//((/(,*,...#,   .((,       */,..@@@@@@**#...,..(*          ",
                    "        . #....,.((,/,(,..*,,...(,                 . * .( #./..(,..%*           ",
                    "         /,...*,,(,*.((..(&.*...(,                     ,  /(,##../ ,(.          ",
                    "        ..,...(*(,/..((..*##/.../,,              *       ,(((#./ .  (           ",
                    "        ,,....((/,.,(((...(%#..,&/,,                     %(((##  .              ",
                    "       /.*...((#../(#((,,..(%..,%,,#,                 ./%(((((#  .              ",
                    "      *.(...,((..(((#((%,..,(...* ,,,*% .     .... #####%(((((#                 ",
                    "   . ..(*...(*..((((%(#%.(..,#...,%#/,,,*//.*&&%#%%###((#*((((#  .              ",
                    "   . *((.../* **      , (.*....../,  %(((*,,(#&//&&%#((((.(((((  .              ",
                    "    #((/.,...,    ,      .%*......(.   ,,#(#%&&&&&&&,&#/(,(/(((*                ",
                    "  .#(((*.*,#,,,      ,   **%/......#((  .*(#%&&&&&*.%/%( /.#(((( .              ",
                    " ./#,.%.../.           .  #(((......*.  ./(%%%(*(&&&&/&#,#.*#*((( ..            ",
                    ",((((//. (#             .  #(,(......#. (((. *./*((/@/&&,,..##,.((%.            ",
                    "%(/(/(*./(/.           , .  /(,(....../,((*,(  #(.,(((#*,,*..%#(...,/.         (",
                    "( (((//(,**/*/*(      ,,.*,   (*(..*.,./(%..((&*/.%(.../# *..,,*&,....*      #**",
                    " (/#///((*,*...       ,,(((/***(%/..(....#%,,.(#%#&#.,,,,%*#../,  #*...../ %**##",
                    "(/(/////%            ,(/%*,  .,,((..,#..*.(,(,*##%%%%(,,.,*/#(..(, ,.*...#**##*."};


int main(int argc, char *argv[])
    {
    QCoreApplication a(argc, argv);
    if (argc < 2){
        for (int i = 0; i < 32; i++) display_text(header[i]);
        display_text("----------------------------------------------------------------------------------------------------------");
        display_text("This tool was made by Twn to decompile the script files from The Legend of Heroes: Trails of Cold Steel III.");
        display_text("It is not perfect and requires further testing, therefore if you encounter any type of issue, please contact me");
        display_text("at feitaishi45@gmail.com");
        display_text("---------------------------------------------HOW TO USE---------------------------------------------------");
        display_text("There is only one command: CS3ScriptsDecompiler.exe <filepath_to_convert>");
        display_text("The output format is decided by the extension of the input file: XLSX gives a DAT and DAT gives a XLSX.");

    }
    else
    {
        const QString filepath = QCoreApplication::arguments().at(1);
        display_text("Processing " + filepath);
        Decompiler Dc;
        Dc.SetupGame("CS3");
        Dc.ReadFile(filepath);
        Dc.WriteFile(filepath);
    }



    return a.exec();
}
