
#include <filesystem>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <vector>
#include <cstdio>
using namespace std;

void all_directories(const string& path, vector<string>& directories){
    for (const auto& i : filesystem::directory_iterator(path)){
        if(i.is_directory()){
            directories.push_back(i.path().string());
            all_directories(i.path().string(), directories);
        }
    }
}

vector<string> all_files(const string& path){
    vector<string> directories;
    all_directories(path, directories);
    vector<string> ans;
    for(const string& d : directories){
        for (const auto& i : filesystem::directory_iterator(d)){
            ans.push_back(i.path().string());
        }
    }
    for (const auto& i : filesystem::directory_iterator(path)){
        ans.push_back(i.path().string());
    }
    return ans;
}

void print_vector(const vector<string>& v){
    for(const string& c : v)cout<<c<<endl;
}

void delete_exe_and_o_files_from_path(const string& path){
    vector<string> files = all_files(path);
    vector<string> deleted_files;
    try{
        string thisFileExePath = "D:\\My Code And Projects\\C++\\Problems\\1_____delete_exe_o_files.exe";
        for(string& v : files){
            if(v == thisFileExePath)continue;
            filesystem::path filePath = v;
            if(filePath.extension() == ".exe" || filePath.extension() == ".o"){
                int find = v.find_last_of("\\");
                string file_name = v.substr(find + 1);
                bool removed = filesystem::remove(filePath);
                if(!removed)cout<<"File ("<<file_name<<") Failed To Delete\n";
                else deleted_files.push_back(file_name);
            }
        }
    }
    catch(const filesystem::filesystem_error& err){
        cout<<"filesystem error: " << err.what() << '\n';
    }  
    if(deleted_files.empty()){
        cout<<" ------------------------------------------\n";
        cout<<"|No '.EXE' or '.O' Files found in this path|\n";
        cout<<" ------------------------------------------\n";
    }
    else {
        cout<<"Files"<<endl;
        cout<<"=============================================\n";
        print_vector(deleted_files);
        cout<<"=============================================\n";
        cout<<"Removed Successfully\n";
    }
}

int main(){

    string path = "D:\\My Code And Projects\\C++\\Problems";
    delete_exe_and_o_files_from_path(path);

	cin.get();

    return 0;
}