//#include <unistd.h>
#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

using namespace std;

int main(int argc, char* argv[])
{
    po::options_description desc("Allowed options");
    
    // Bind variables for program options
    string c0;
    string c1;
    string c2;
    string c3;
    string c4;
    string c5;
    string c6;
    string c7;
    string c8;
    string c9;
    string extension;
    string format_string;

    try
    {
        // Declare supported options
        desc.add_options()
            ("format_string,f",
                po::value<string>(&format_string), "set a new file extension.")
            ("counter_0,0",
                po::value<string>(&c0), "set the first counter to a starting value (use leading zeros for padding).")
            ("counter_1,1",
                po::value<string>(&c1), "set the second counter to a starting value (use leading zeros for padding).")
            ("counter_2,2",
                po::value<string>(&c2), "set the third counter to a starting value (use leading zeros for padding).")
            ("counter_3,3",
                po::value<string>(&c3), "set the fourth counter to a starting value (use leading zeros for padding).")
            ("counter_4,4",
                po::value<string>(&c4), "set the fifth counter to a starting value (use leading zeros for padding).")
            ("counter_5,5",
                po::value<string>(&c5), "set the sixth counter to a starting value (use leading zeros for padding).")
            ("counter_6,6",
                po::value<string>(&c6), "set the seventh counter to a starting value (use leading zeros for padding).")
            ("counter_7,7",
                po::value<string>(&c7), "set the eighth counter to a starting value (use leading zeros for padding).")
            ("counter_8,8",
                po::value<string>(&c8), "set the nineth counter to a starting value (use leading zeros for padding).")
            ("counter_9,9",
                po::value<string>(&c9), "set the tenth counter to a starting value (use leading zeros for padding).")
            ("extension,e",
                po::value<string>(&extension), "set a new file extension.")
            ;

        // Store the options in a variables_map
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);

        // Format string
        if (vm.count("format_string"))
            cout << "format_string was set to " << format_string << endl;

        // First counter
        if (vm.count("counter_0"))
            cout << "counter_0 was set to " << c0 << endl;

        // First counter
        if (vm.count("counter_1"))
            cout << "counter_1 was set to " << c1 << endl;

        // First counter
        if (vm.count("counter_2"))
            cout << "counter_2 was set to " << c2 << endl;

        // First counter
        if (vm.count("counter_3"))
            cout << "counter_3 was set to " << c3 << endl;

        // First counter
        if (vm.count("counter_4"))
            cout << "counter_4 was set to " << c4 << endl;

        // First counter
        if (vm.count("counter_5"))
            cout << "counter_5 was set to " << c5 << endl;

        // First counter
        if (vm.count("counter_6"))
            cout << "counter_6 was set to " << c6 << endl;

        // First counter
        if (vm.count("counter_7"))
            cout << "counter_7 was set to " << c7 << endl;

        // First counter
        if (vm.count("counter_8"))
            cout << "counter_8 was set to " << c8 << endl;

        // First counter
        if (vm.count("counter_9"))
            cout << "counter_9 was set to " << c9 << endl;

        // Extension
        if (vm.count("extension"))
            cout << "extension was set to " << extension << endl;
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
        cout << desc << endl;
        return 1;
    }

    //int option = 0;
    //bool number_at_beginning = false;
    //char* base_name = nullptr;
    //unsigned int start_index = 1;
    //unsigned int increment = 1;
    //unsigned int number_of_digits = 3;

    //while((option = getopt(argc, argv, "fb:s:i:d:")) != -1)
    //{
    //    switch(option)
    //    {
    //        case 'f':
    //            number_at_beginning = true;
    //            break;
    //        case 'b':
    //            base_name = optarg;
    //            break;
    //        case 's':
    //            start_index = atoi(optarg);
    //            break;
    //        case 'i':
    //            increment = atoi(optarg);
    //            break;
    //        case 'd':
    //            number_of_digits = atoi(optarg);
    //            break;
    //        default:
    //            helpusage();
    //            return 1;
    //            break;
    //    }
    //}

    //char dir[255];
    //if(base_name == nullptr)
    //{
    //    getcwd(dir, 255);
    //    base_name = strrchr(dir, '\\') + 1;
    //}

    //unsigned int file_count = argc - optind;
    //char files[file_count][255] = {'\0'};
    //char new_files[file_count][255] = {'\0'};

    //for(int i = optind; i < argc; ++i)
    //{
    //    if(strlen(argv[i]) > 255)
    //    {
    //        cout << "Filename too long (over 255)" << endl;
    //        cout << argv[i] << endl;
    //        return 1;
    //    }

    //    strcpy(files[i - optind], argv[i]);
    //}

    //char format[6] = {'\0'};
    //sprintf(format, "%%0%dd", number_of_digits);
    //char number[number_of_digits + 1] = {'\0'};

    //for(unsigned int i = 0; i < file_count; ++i)
    //{
    //    char* dot = strrchr(files[i], '.');
    //    memset(number, '0', number_of_digits);
    //    sprintf(number, format, start_index + i * increment);

    //    if(!number_at_beginning)
    //        sprintf(new_files[i], "%s-%s%s", base_name, number, dot);
    //    else
    //        sprintf(new_files[i], "%s-%s%s", number, base_name, dot);

    //    char* current_char = new_files[i];
    //    while(*current_char != '\0')
    //    {
    //        if(*current_char == ' ')
    //            *current_char = '_';
    //        ++current_char;
    //    }

    //    rename(files[i], new_files[i]);

    //    cout << files[i] << " -> " << new_files[i] << endl;
    //}

    return 0;
}

//void helpusage()
//{
//    cout << "Usage: batch_rename [options] FilesToRename..." << endl;
//    cout << "Options:" << endl;
//    cout << "-f" << endl;
//    cout << "    Place number at beginning of file name instead of end" << endl;
//    cout << "     e.g. \"01-File.gz\" instead of \"File-01.gz\"\n" << endl;
//    cout << "-b BASENAME" << endl;
//    cout << "    The basename of the new files (the name without the numbers)" << endl;
//    cout << "    The default is the name of the directory in which the files are found\n" << endl;
//    cout << "-s START_INDEX" << endl;
//    cout << "    The first number to use when naming the new files\n" << endl;
//    cout << "-i INCREMENT" << endl;
//    cout << "    The amount the number increases between each new file name\n" << endl;
//    cout << "-d DIGITS" << endl;
//    cout << "    The number of digits in each filename number.  0s are used to pad to this number." << endl;
//    cout << "     e.g. If digits is set to 3 and the filename number is 1 then the file will be File-001.gz\n" << endl;
//    cout << "Examples:" << endl;
//    cout << "-Rename all files in the current directory \"./thisDirectory\" to thisDirectory-01.ext thisDirectory-02.ext" << endl;
//    cout << "  where ext is the file extension the file had before the renaming" << endl;
//    cout << "$ batchrename *\n" << endl;
//    cout << "-Rename all jpegs to Picture-01.jpg, Picture-02.jpg, etc." << endl;
//    cout << "$ batchrename -b \"Picture-\" *.jpg\n" << endl;
//    cout << "-Rename all mp3 files in the current directory to Music-010.mp3, Music-020.mp3, etc." << endl;
//    cout << "$ batchrename -b \"Music-\" -s 10 -i 10 -d 3 *.mp3" << endl;
//}
