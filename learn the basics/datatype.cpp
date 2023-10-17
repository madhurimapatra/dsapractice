int dataTypes(string type) {
	if(type == "Integer")return sizeof(int);

    if(type == "Character")return sizeof (char);

    if(type == "Float")return sizeof(float);

    if(type == "Double")return sizeof(double);

    if(type == "Long")return sizeof(long);

    return 0;
}