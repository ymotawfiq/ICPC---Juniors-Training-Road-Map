
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



int main(){

    string path = "D:\\My Code And Projects\\C++\\Problems";

    vector<string> files = all_files(path);

    try{
        string thisFileExePath = "D:\\My Code And Projects\\C++\\Problems\\1_____delete_exe_o_files.exe";
        for(string& v : files){
            if(v == thisFileExePath)continue;
            filesystem::path filePath = v;
            if(filePath.extension() == ".exe" || filePath.extension() == ".o"){
                bool removed = filesystem::remove(filePath);
                if(!removed){
                    cout<<"Failed to delete "<<v<<" file\n";
                }
                else{
                    cout<<v<<" ---> ((removed successfully!))\n";
                }
            }
        }
        cout<<"\n.EXE && .O files deleted successfully.\n";
    }
    catch(const filesystem::filesystem_error& err){
        cout<<"filesystem error: " << err.what() << '\n';
    }

	cin.get();

    return 0;
}