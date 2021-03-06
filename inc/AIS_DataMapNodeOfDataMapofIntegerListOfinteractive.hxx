// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapNodeOfDataMapofIntegerListOfinteractive_HeaderFile
#define _AIS_DataMapNodeOfDataMapofIntegerListOfinteractive_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.hxx>

#include <Standard_Integer.hxx>
#include <AIS_ListOfInteractive.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class AIS_ListOfInteractive;
class TColStd_MapIntegerHasher;
class AIS_DataMapofIntegerListOfinteractive;
class AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive;



class AIS_DataMapNodeOfDataMapofIntegerListOfinteractive : public TCollection_MapNode
{

public:

  
    AIS_DataMapNodeOfDataMapofIntegerListOfinteractive(const Standard_Integer& K, const AIS_ListOfInteractive& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      AIS_ListOfInteractive& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive)

protected:




private: 


  Standard_Integer myKey;
  AIS_ListOfInteractive myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem AIS_ListOfInteractive
#define TheItem_hxx <AIS_ListOfInteractive.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode AIS_DataMapNodeOfDataMapofIntegerListOfinteractive
#define TCollection_DataMapNode_hxx <AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.hxx>
#define TCollection_DataMapIterator AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive
#define TCollection_DataMapIterator_hxx <AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.hxx>
#define Handle_TCollection_DataMapNode Handle_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive
#define TCollection_DataMapNode_Type_() AIS_DataMapNodeOfDataMapofIntegerListOfinteractive_Type_()
#define TCollection_DataMap AIS_DataMapofIntegerListOfinteractive
#define TCollection_DataMap_hxx <AIS_DataMapofIntegerListOfinteractive.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _AIS_DataMapNodeOfDataMapofIntegerListOfinteractive_HeaderFile
