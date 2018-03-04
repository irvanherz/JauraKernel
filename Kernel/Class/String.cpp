#include <Jaura.h>

using namespace System;

String::String(const char ch){
	length = 1;
	chars = (char*) malloc(2);
	*chars = ch;
	chars[1] = 0;
}

String::String(const char *str){
	size_t l = 0;
	for(char *s = (char*) str; *s; s++, l++){};
	length = l;
	chars = (char*) malloc(l+1);
	for(char *s = chars; l; *s=*str,s++,str++,l--){};
	chars[length] = 0;
}

String::String(const String &str){
	size_t l = str.length;
	length = l;
	chars = (char*) malloc(l+1);
	for(char *s = chars, *t = str.chars; l; *s=*t,s++,t++,l--){};
	chars[length] = 0;
}


String::String(const char *str, size_t off, size_t len){
	length = len;
	chars = (char*) malloc(len+1);
	for(char *s = &chars[off]; len; *s=*str,s++,str++,len--){};
	chars[length] = 0;
}

String::~String(){
	free((void*) chars);
}

String & String::appendWith (String & str){
	size_t nl = length + str.length;
	chars = (char*) realloc(chars, nl+1);
	
	size_t l = str.length;
	for(char *s = &chars[length], *t=str.chars; l; *s=*t,s++,t++,l--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

String & String::appendWith (const char * str){
	size_t l = 0;
	for(char *s = (char*) str; *s; s++, l++){};
	size_t nl = length + l;
	chars = (char*) realloc(chars, nl+1);
	
	for(char *s = &chars[length]; l; *s=*str,s++,str++,l--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

String & String::prependWith (const char * str){
	size_t l2 = 0;
	for(char *x = (char*) str; *x; x++, l2++){};
	size_t nl = length + l2;
	chars = (char*) realloc(chars, nl+1);
	
	size_t l1 = length;
	for(char *x = &chars[nl-1], *y = &chars[l1-1]; l1; *x=*y,x--,y--,l1--){};
	for(char *x = chars; l2; *x=*str,x++,str++,l2--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

String & String::prependWith (String &str){
	size_t nl = length + str.length;
	chars = (char*) realloc(chars, nl+1);
	
	size_t l1 = length, l2=str.length;
	for(char *x = &chars[nl-1], *y = &chars[l1-1]; l1; *x=*y,x--,y--,l1--){};
	for(char *x = chars, *y = str.chars; l2; *x=*y,x++,y++,l2--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

int String::compareWith(const char *str){
	char *x = chars;
	for(;*x == *str; x++, str++){
		if(!(*x)) return 0;
	}
	if(*x < *str)return -1;
	else return 1;
}

int String::compareWith(const String &str){
	char *x = chars, *y = str.chars;
	for(;*x == *y; x++, y++){
		if(!(*x)) return 0;
	}
	if(*x < *y)return -1;
	else return 1;
}

String & String::operator += (String & str){
	size_t nl = length + str.length;
	chars = (char*) realloc(chars, nl + 1);
	
	size_t l = str.length;
	for(char *s = &chars[length], *t=str.chars; l; *s=*t,s++,t++,l--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

String & String::operator += (const char * str){
	size_t l = 0;
	for(char *s = (char*) str; *s; s++, l++){};
	size_t nl = length + l;
	chars = (char*) realloc(chars, nl + 1);
	
	for(char *s = &chars[length]; l; *s=*str,s++,str++,l--){};
	length = nl;
	chars[length] = 0;
	return *this;
}

String & String::operator = (const char * str){
	size_t l = 0;
	for(char *s = (char*) str; *s; s++, l++){};
	length = l;
	chars = (char*) realloc(chars,l + 1);
	for(char *s = chars; l; *s=*str,s++,str++,l--){};
	chars[length] = 0;
	return *this;
}

String & String::operator = (String & str){
	chars = (char*) realloc(chars, str.length + 1);
	
	size_t l = str.length;
	for(char *s = chars, *t=str.chars; l; *s=*t,s++,t++,l--){};
	length = str.length;
	chars[length] = 0;
	return *this;
}

char & String::operator [] (size_t off){
	return chars[off];
}

void String::dprint(){
	size_t i=length;
	for(char *s=chars;i; s++,i--){std::cout<<*s;}
	std::cout<<std::endl;
}

String & operator + (String &left, String &right){
	String *n = new String(left);
	n->appendWith(right);
	return *n;
}

String & operator + (String &left, const char *right){
	String *n = new String(left);
	n->appendWith(right);
	return *n;
}

String & operator + (const char *left, String &right){
	String *n = new String(left);
	n->appendWith(right);
	return *n;
}

