#ifndef AVE_HPP
#define AVE_HPP

#include "Ave.hpp"

#endif

#include <string>
#include <sstream>
using namespace std;

class AveNativo : public Ave
{
	private:
		string m_uf_origem;
		string m_autorizacao;
		string m_autorizacao_ibama;
	public:
		AveNativo();
		~AveNativo();

		void setM_uf_origem(string value);
		string getM_uf_origem();

		void setM_autorizacao(string value);
		string getM_autorizacao();

		void setM_autorizacao_ibama(string value);
		string getM_autorizacao_ibama();
	
		string mysql_insert(string nome_tabela);
};