//#include <unistd.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void helpusage()
{
    cout << "Usage: batch_rename [options] FilesToRename..." << endl;
    cout << "Options:" << endl;
    cout << "-f" << endl;
    cout << "    Place number at beginning of file name instead of end" << endl;
    cout << "     e.g. \"01-File.gz\" instead of \"File-01.gz\"\n" << endl;
    cout << "-b BASENAME" << endl;
    cout << "    The basename of the new files (the name without the numbers)" << endl;
    cout << "    The default is the name of the directory in which the files are found\n" << endl;
    cout << "-s START_INDEX" << endl;
    cout << "    The first number to use when naming the new files\n" << endl;
    cout << "-i INCREMENT" << endl;
    cout << "    The amount the number increases between each new file name\n" << endl;
    cout << "-d DIGITS" << endl;
    cout << "    The number of digits in each filename number.  0s are used to pad to this number." << endl;
    cout << "     e.g. If digits is set to 3 and the filename number is 1 then the file will be File-001.gz\n" << endl;
    cout << "Examples:" << endl;
    cout << "-Rename all files in the current directory \"./thisDirectory\" to thisDirectory-01.ext thisDirectory-02.ext" << endl;
    cout << "  where ext is the file extension the file had before the renaming" << endl;
    cout << "$ batchrename *\n" << endl;
    cout << "-Rename all jpegs to Picture-01.jpg, Picture-02.jpg, etc." << endl;
    cout << "$ batchrename -b \"Picture-\" *.jpg\n" << endl;
    cout << "-Rename all mp3 files in the current directory to Music-010.mp3, Music-020.mp3, etc." << endl;
    cout << "$ batchrename -b \"Music-\" -s 10 -i 10 -d 3 *.mp3" << endl;
}

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        helpusage();
        return 1;
    }

    /*int option = 0;
    bool number_at_beginning = false;
    char* base_name = nullptr;
    unsigned int start_index = 1;
    unsigned int increment = 1;
    unsigned int number_of_digits = 3;

    while((option = getopt(argc, argv, "fb:s:i:d:")) != -1)
    {
        switch(option)
        {
            case 'f':
                number_at_beginning = true;
                break;
            case 'b':
                base_name = optarg;
                break;
            case 's':
                start_index = atoi(optarg);
                break;
            case 'i':
                increment = atoi(optarg);
                break;
            case 'd':
                number_of_digits = atoi(optarg);
                break;
            default:
                helpusage();
                return 1;
                break;
        }
    }

    char dir[255];
    if(base_name == nullptr)
    {
        getcwd(dir, 255);
        base_name = strrchr(dir, '\\') + 1;
    }

    unsigned int file_count = argc - optind;
    char files[file_count][255] = {'\0'};
    char new_files[file_count][255] = {'\0'};

    for(int i = optind; i < argc; ++i)
    {
        if(strlen(argv[i]) > 255)
        {
            cout << "Filename too long (over 255)" << endl;
            cout << argv[i] << endl;
            return 1;
        }

        strcpy(files[i - optind], argv[i]);
    }

    char format[6] = {'\0'};
    sprintf(format, "%%0%dd", number_of_digits);
    char number[number_of_digits + 1] = {'\0'};

    for(unsigned int i = 0; i < file_count; ++i)
    {
        char* dot = strrchr(files[i], '.');
        memset(number, '0', number_of_digits);
        sprintf(number, format, start_index + i * increment);

        if(!number_at_beginning)
            sprintf(new_files[i], "%s-%s%s", base_name, number, dot);
        else
            sprintf(new_files[i], "%s-%s%s", number, base_name, dot);

        char* current_char = new_files[i];
        while(*current_char != '\0')
        {
            if(*current_char == ' ')
                *current_char = '_';
            ++current_char;
        }

        rename(files[i], new_files[i]);

        cout << files[i] << " -> " << new_files[i] << endl;
    }

    return 0;*/
}

