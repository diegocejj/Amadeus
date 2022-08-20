/**
 * @file Amadeus.h
 *
 * \page Globals_Page Variables globales del software
 *
 * @brief Object have all function and variables definition
 *
 * @author:	Diego Cejas
 *
 * @date 2022 Copyright All Rights Reserved
 *
 * <pre>
 * </pre>
 *
 * <br>
 * <table border="1">
 * 	<tr> <th> Autor </th> <th> Fecha </th> <th> Comentarios </th>  </tr>
 *  <tr> <td> Diego Cejas </td> <td> 10/08/2022 </td> <td> Visual Studio 2022 </td> </tr>
 * </table>
 */

#ifndef AmadeusH
#define AmadeusH

using namespace std;

// Library
#include <iostream>
#include <vector>
#include <algorithm>

// Define
//#define MAX_DATA_LENGTH 			255
//#define _DEBUG

//#define RX_SETTING_HV_ENABLE
//#ifdef RX_SETTING_HV_ENABLE
//	#define SETTING_ENABLE_HV
//	#define SETTING_DISABLE_HV
//	#define SETTING_WRITING_HV
//	#define SETTING_READING_HV
//#endif

/*! Struct contain events*/
struct evento
{
	string first;
	unsigned int second;
};


/**
 * @brief Clase con variables globales del software FMF-1000
 *
 */
class Globals_Var
{
	public:		// Public function administration
		Globals_Var();
		__fastcall ~Globals_Var();
	
	private:	// Private function administration
		
		struct evento event_with_max_occurrences;
		const auto getEventWithMaxOccurrences(vector <string> event);
};

#endif