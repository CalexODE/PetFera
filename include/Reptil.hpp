class Reptil{
	private:
		bool m_venenoso;
		string m_tipo_veneno;
	public:
		Reptil();
		~Reptil();
		//gets e sets
		void setM_tipo_veneno(string value);
		string getM_tipo_veneno();
		void setM_venenoso(bool value);
		bool getM_venenoso();
};