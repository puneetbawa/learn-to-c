File is a collection of bytes that is stored on secondary storage devices like disk. There are two kinds of files in a system.

BASIC FILE OPERATIONS IN C PROGRAMMING: There are 4 basic operations that can be performed on any files in C programming language. They are,

1) Opening/Creating a file
        fopen()
        *Declaration : FILE fp;
                       fopen("filename","mode");*

2) Closing a file
        fclose()
        *Declaration:  FILE fp;
                       fopen("filename","mode");
                       fclose(fp);

3) Reading a file
        fgets()
        *Declaration:
        fgets (buffer, size, fp); //where buffer is where to put the data in and size is size of the buffer

4) Writing in a file
        fprint()
        *Declaration:
        fprintf (fp, “some data”); or
        fprintf (fp, “text %d”, variable_name);

MODE OF OPERATIONS PERFORMED ON A FILE IN C LANGUAGE: There are many modes in opening a file. Based on the mode of file, it can be opened for reading or writing or appending the texts. They are listed below.

r – Opens a file in read mode and sets pointer to the first character in the file. It returns null if file does not exist.
w – Opens a file in write mode. It returns null if file could not be opened. If file exists, data are overwritten.
a – Opens a file in append mode.  It returns null if file couldn’t be opened.
r+ – Opens a file for read and write mode and sets pointer to the first character in the file.
w+ – opens a file for read and write mode and sets pointer to the first character in the file.
a+ – Opens a file for read and write mode and sets pointer to the first character in the file. But, it can’t modify existing contents.

r	Open for reading. If the file does not exist, fopen() returns NULL.
rb	Open for reading in binary mode.If the file does not exist, fopen() returns NULL.
w	Open for writing. If the file exists, its contents are overwritten.If the file does not exist, it will be created.
wb	Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.
a	Open for append. Data is added to the end of the file. If the file does not exist, it will be created.
ab	Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.
r+	Open for both reading and writing. If the file does not exist, fopen() returns NULL.
rb+	Open for both reading and writing in binary mode. If the file does not exist, fopen() returns NULL.
w+	Open for both reading and writing. If the file exists, its contents are overwritten.If the file does not exist, it will be created.
wb+	Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it 
	will be created.
a+	Open for both reading and appending. If the file does not exist, it will be created.
ab+	Open for both reading and appending in binary mode. If the file does not exist, it will be created.
