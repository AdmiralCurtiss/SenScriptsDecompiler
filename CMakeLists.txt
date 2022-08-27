cmake_minimum_required(VERSION 3.20)

cmake_policy(SET CMP0079 NEW)
cmake_policy(SET CMP0091 NEW)
cmake_policy(SET CMP0092 NEW)
cmake_policy(SET CMP0117 NEW)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

project(SenScriptsDecompiler CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Gui)

add_executable(SenScriptsDecompiler
	headers/Builder.h
	headers/CS1InstructionsSet.h
	headers/CS2InstructionsSet.h
	headers/CS3InstructionsSet.h
	headers/CS4InstructionsSet.h
	headers/decompiler.h
	headers/exceptions.h
	headers/functions.h
	headers/global_vars.h
	headers/instruction.h
	headers/operande.h
	headers/ReverieInstructionsSet.h
	headers/translationfile.h
	headers/TXInstructionsSet.h
	headers/utilities.h
	sources/Builder.cpp
	sources/decompiler.cpp
	sources/functions.cpp
	sources/instruction.cpp
	sources/main.cpp
	sources/translationfile.cpp
	sources/utilities.cpp

	subprojects/qxlsx/headers/xlsxabstractooxmlfile.h
	subprojects/qxlsx/headers/xlsxabstractooxmlfile_p.h
	subprojects/qxlsx/headers/xlsxabstractsheet.h
	subprojects/qxlsx/headers/xlsxabstractsheet_p.h
	subprojects/qxlsx/headers/xlsxcell.h
	subprojects/qxlsx/headers/xlsxcell_p.h
	subprojects/qxlsx/headers/xlsxcellformula.h
	subprojects/qxlsx/headers/xlsxcellformula_p.h
	subprojects/qxlsx/headers/xlsxcelllocation.h
	subprojects/qxlsx/headers/xlsxcellrange.h
	subprojects/qxlsx/headers/xlsxcellreference.h
	subprojects/qxlsx/headers/xlsxchart.h
	subprojects/qxlsx/headers/xlsxchart_p.h
	subprojects/qxlsx/headers/xlsxchartsheet.h
	subprojects/qxlsx/headers/xlsxchartsheet_p.h
	subprojects/qxlsx/headers/xlsxcolor_p.h
	subprojects/qxlsx/headers/xlsxconditionalformatting.h
	subprojects/qxlsx/headers/xlsxconditionalformatting_p.h
	subprojects/qxlsx/headers/xlsxcontenttypes_p.h
	subprojects/qxlsx/headers/xlsxdatavalidation.h
	subprojects/qxlsx/headers/xlsxdatavalidation_p.h
	subprojects/qxlsx/headers/xlsxdatetype.h
	subprojects/qxlsx/headers/xlsxdocpropsapp_p.h
	subprojects/qxlsx/headers/xlsxdocpropscore_p.h
	subprojects/qxlsx/headers/xlsxdocument.h
	subprojects/qxlsx/headers/xlsxdocument_p.h
	subprojects/qxlsx/headers/xlsxdrawing_p.h
	subprojects/qxlsx/headers/xlsxdrawinganchor_p.h
	subprojects/qxlsx/headers/xlsxformat.h
	subprojects/qxlsx/headers/xlsxformat_p.h
	subprojects/qxlsx/headers/xlsxglobal.h
	subprojects/qxlsx/headers/xlsxmediafile_p.h
	subprojects/qxlsx/headers/xlsxnumformatparser_p.h
	subprojects/qxlsx/headers/xlsxrelationships_p.h
	subprojects/qxlsx/headers/xlsxrichstring.h
	subprojects/qxlsx/headers/xlsxrichstring_p.h
	subprojects/qxlsx/headers/xlsxsharedstrings_p.h
	subprojects/qxlsx/headers/xlsxsimpleooxmlfile_p.h
	subprojects/qxlsx/headers/xlsxstyles_p.h
	subprojects/qxlsx/headers/xlsxtheme_p.h
	subprojects/qxlsx/headers/xlsxutility_p.h
	subprojects/qxlsx/headers/xlsxworkbook.h
	subprojects/qxlsx/headers/xlsxworkbook_p.h
	subprojects/qxlsx/headers/xlsxworksheet.h
	subprojects/qxlsx/headers/xlsxworksheet_p.h
	subprojects/qxlsx/headers/xlsxzipreader_p.h
	subprojects/qxlsx/headers/xlsxzipwriter_p.h
	subprojects/qxlsx/sources/xlsxabstractooxmlfile.cpp
	subprojects/qxlsx/sources/xlsxabstractsheet.cpp
	subprojects/qxlsx/sources/xlsxcell.cpp
	subprojects/qxlsx/sources/xlsxcellformula.cpp
	subprojects/qxlsx/sources/xlsxcelllocation.cpp
	subprojects/qxlsx/sources/xlsxcellrange.cpp
	subprojects/qxlsx/sources/xlsxcellreference.cpp
	subprojects/qxlsx/sources/xlsxchart.cpp
	subprojects/qxlsx/sources/xlsxchartsheet.cpp
	subprojects/qxlsx/sources/xlsxcolor.cpp
	subprojects/qxlsx/sources/xlsxconditionalformatting.cpp
	subprojects/qxlsx/sources/xlsxcontenttypes.cpp
	subprojects/qxlsx/sources/xlsxdatavalidation.cpp
	subprojects/qxlsx/sources/xlsxdatetype.cpp
	subprojects/qxlsx/sources/xlsxdocpropsapp.cpp
	subprojects/qxlsx/sources/xlsxdocpropscore.cpp
	subprojects/qxlsx/sources/xlsxdocument.cpp
	subprojects/qxlsx/sources/xlsxdrawing.cpp
	subprojects/qxlsx/sources/xlsxdrawinganchor.cpp
	subprojects/qxlsx/sources/xlsxformat.cpp
	subprojects/qxlsx/sources/xlsxmediafile.cpp
	subprojects/qxlsx/sources/xlsxnumformatparser.cpp
	subprojects/qxlsx/sources/xlsxrelationships.cpp
	subprojects/qxlsx/sources/xlsxrichstring.cpp
	subprojects/qxlsx/sources/xlsxsharedstrings.cpp
	subprojects/qxlsx/sources/xlsxsimpleooxmlfile.cpp
	subprojects/qxlsx/sources/xlsxstyles.cpp
	subprojects/qxlsx/sources/xlsxtheme.cpp
	subprojects/qxlsx/sources/xlsxutility.cpp
	subprojects/qxlsx/sources/xlsxworkbook.cpp
	subprojects/qxlsx/sources/xlsxworksheet.cpp
	subprojects/qxlsx/sources/xlsxzipreader.cpp
	subprojects/qxlsx/sources/xlsxzipwriter.cpp
)

if (WIN32)
	target_compile_options(SenScriptsDecompiler PUBLIC /bigobj)
endif()

target_include_directories(SenScriptsDecompiler
PUBLIC
	./
	subprojects/
	subprojects/qxlsx/headers/
	${Qt5Gui_PRIVATE_INCLUDE_DIRS}
)

target_link_libraries(SenScriptsDecompiler
PUBLIC
	Qt5::Core
	Qt5::Gui
)
