#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[],int maxline);

// print longest input line 

void reverse(char st[]);

int main() {

	int len;
	char line[MAXLINE];
	

	while((len = getLine(line,MAXLINE))>0) {
		
		printf("%s",line);
		reverse(line);
		printf("Reversed: %s",line);
	}

	return 0;
}

//getline: read a line into s, return length
int getLine(char s[], int lim) {
	int c, i;

	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!= '\n'; ++i)
		if((i==lim && c==' ') || c=='\t' ) {
			i--;
		} else {
			s[i] = c;
		}
	if (c == '\n') {
		s[i] = c;
		++i;
	} 
	s[i] = '\0';
	return i;
}

int length(char line[])
{
    int i;
    
    for(i = 0; line[i] != '\0'; ++i);

    return i;
}

void reverse(char line[])
{   
    int i_front = 0;
    int i_back = length(line);
    char temp;

    i_back -= 2; //removes \n and \0 delimmiter 
    while(i_back > i_front)
    {
        temp = line[i_front];
        line[i_front] = line[i_back];
        line[i_back] = temp;

        ++i_front;
        --i_back;
    }
}
