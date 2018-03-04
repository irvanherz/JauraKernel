#ifndef STRING_H
#define STRING_H

class String {
public:
	size_t	  length;
	char	* chars;
	
	String (const char ch);
	String (const char *str);
	String (const String &str);
	String (const char *str, size_t off, size_t len);
	~String ();
	String & appendWith (String & str);
	String & appendWith (const char * str);
	String & prependWith (const char * str);
	String & prependWith (String & str);
	int compareWith(const char *str);
	int compareWith(const String &str);
	String & operator += (String & str);
	String & operator += (const char * str);
	String & operator = (String & str);
	String & operator = (const char * str);
	char & operator [] (size_t off);
	void dprint();
};
String & operator + (String &left, String &right);
String & operator + (String &left, const char *right);
String & operator + (const char *left, String &right);

#endif