#pragma once

#include "JSON.h"
#include "JSONValue.h"

namespace simplejson
{
	class JSONParser
	{
	public:
		// Functions
		/**
		* \brief Extract JSONArray from JSONObject if is posible
		*
		* \param[in] json
		* \param[in] id to look for
		* \return TRUE if Success
		*/
		static bool extractJSONArray(JSONObject &json, std::wstring &id, JSONArray &result, bool recursive = false);
		static bool extractJSONObject(JSONObject &json, std::wstring &id, JSONObject &result, bool recursive = false);
		static bool extractBool(JSONObject &json, std::wstring &id, bool &result, bool recursive = false);
		static bool extractString(JSONObject &json, std::wstring &id, std::string &result, bool recursive = false);
		static bool extractInt(JSONObject &json, std::wstring &id, int &result, bool recursive = false);
	};
}	// namespace simplejson
