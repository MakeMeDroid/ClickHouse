#ifndef DBMS_CORE_ERROR_CODES_H
#define DBMS_CORE_ERROR_CODES_H


namespace DB
{

namespace ErrorCodes
{
	enum ErrorCodes
	{
		UNSUPPORTED_METHOD,
		UNSUPPORTED_PARAMETER,
		UNEXPECTED_END_OF_FILE,
		CANNOT_READ_DATA_FROM_ISTREAM,
		CANNOT_PARSE_TEXT,
		INCORRECT_NUMBER_OF_COLUMNS,
		THERE_IS_NO_COLUMN,
		SIZES_OF_COLUMNS_DOESNT_MATCH,
		EMPTY_COLUMN_IN_BLOCK,
		NOT_FOUND_COLUMN_IN_BLOCK,
		POSITION_OUT_OF_BOUND,
	};
}

}

#endif
