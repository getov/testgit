#include <iostream>
#include <string>
#include <regex>
using namespace std;

void separate(char path[], char fileSpec[], const char fileName[])
{
	int pos = strlen(fileName) - 1;
	while (pos >= 0 && fileName[pos] != '/' && fileName[pos] != '\\') {
		pos--;
	}

	if (pos<0) {
		// No path specified, the entire fileName is the file spec, assume path is current folder
		strcpy(path, ".");
		strcpy(fileSpec, fileName);
	}
	else {
		// There is a path as part of the name, separate the file name
		strncpy(path, fileName, pos);
		path[pos++] = '\0';
		strcpy(fileSpec, fileName + pos);
	}
}

int isWildcard(const char fileName[])
{
	int pos = strlen(fileName) - 1;
	while (pos >= 0)
	{
		if (fileName[pos] == '*' || fileName[pos] == '?' || fileName[pos] == ']')
			return true;
		pos--;
	}
	return false;
}

int main()
{
	char* files[] = { "C:\\My Documents\\example[1-9].txt",
						"README.txt",
						"bin/home/main.cpp",
						"cuda.cpp",
						"file[1-9].txt",
						"file2.txt",
						"file3.txt",
						"file4.txt",
						"file5.txt" };

	char* contents [] = { "file1.txt", "file2.txt", "example.com", "file4.txt" };

	char path[2048] = "";
	char fileSpec[1024] = "";
	char* args = files[0];

	vector<cmatch> matches(4);
	if (isWildcard(args))
	{
		separate(path, fileSpec, args);

		for (int i = 0; i < 4; ++i)
		{
			regex_match(contents[i], matches[i], regex(files[4]));
		}
		
		//regex_search(contents, match, regex(files[4]));

	}

	for (int i = 0; i != matches.size(); ++i)
	{
		cout << matches[i].str() << endl;
	}

	cout << "meow";

	return 0;
}