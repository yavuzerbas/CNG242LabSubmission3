/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question.This is my own work that is
done by myself only */
#pragma once
class MyString
{
public:
	static int myStrCmp(char* firstString,char* secondString){
		int i = 0,j = 0,k = 0;
		while (firstString[i] != '\0') {
			i++;
		}
		while (secondString[j] != '\0') {
			j++;
		}
		if (i == j) {
			while (firstString[k] != '\0') {
				if (firstString[k] == secondString[k]) {
					k++;
				}
				else {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
		return 1;
		
	}
	static int myStrCmp(const char firstString[], const char secondString[]) {
		int i = 0, j = 0, k = 0;
		while (firstString[i] != '\0') {
			i++;
		}
		while (secondString[j] != '\0') {
			j++;
		}
		if (i == j) {
			while (firstString[k] != '\0') {
				if (firstString[k] == secondString[k]) {
					k++;
				}
				else {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
		return 1;

	}
	static int myStrCmp(char* firstString, const char secondString[]) {
		int i = 0, j = 0, k = 0;
		while (firstString[i] != '\0') {
			i++;
		}
		while (secondString[j] != '\0') {
			j++;
		}
		if (i == j) {
			while (firstString[k] != '\0') {
				if (firstString[k] == secondString[k]) {
					k++;
				}
				else {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
		return 1;

	}
	static int myStrCmp(const char firstString[], char* secondString) {
		int i = 0, j = 0, k = 0;
		while (firstString[i] != '\0') {
			i++;
		}
		while (secondString[j] != '\0') {
			j++;
		}
		if (i == j) {
			while (firstString[k] != '\0') {
				if (firstString[k] == secondString[k]) {
					k++;
				}
				else {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
		return 1;

	}
};