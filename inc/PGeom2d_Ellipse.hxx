// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Ellipse_HeaderFile
#define _PGeom2d_Ellipse_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom2d_Ellipse.hxx>

#include <Standard_Real.hxx>
#include <PGeom2d_Conic.hxx>
class gp_Ax22d;


class PGeom2d_Ellipse : public PGeom2d_Conic
{

public:

  
  //! Creates an ellipse with default values.
  Standard_EXPORT PGeom2d_Ellipse();
  
  //! Creates   an Ellipse      with  <aPosition>,
  //! <aMajorRadius> and <aMinorRadius> as  field values.
  //! The major radius of  the ellipse is  on the "XAxis"
  //! and  the minor radius   of the ellipse   is  on the
  //! "YAxis".
  Standard_EXPORT PGeom2d_Ellipse(const gp_Ax22d& aPosition, const Standard_Real aMajorRadius, const Standard_Real aMinorRadius);
  
  //! Set the value of the field majorRadius with <aMajorRadius>.
  Standard_EXPORT   void MajorRadius (const Standard_Real aMajorRadius) ;
  
  //! Returns the value of the field majorRadius.
  Standard_EXPORT   Standard_Real MajorRadius()  const;
  
  //! Set the value of the field minorRadius with <aMinorRadius>.
  Standard_EXPORT   void MinorRadius (const Standard_Real aMinorRadius) ;
  
  //! Returns the value of the field minorRadius.
  Standard_EXPORT   Standard_Real MinorRadius()  const;

PGeom2d_Ellipse(const Storage_stCONSTclCOM& a) : PGeom2d_Conic(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom2d_EllipsemajorRadius() const { return majorRadius; }
    void _CSFDB_SetPGeom2d_EllipsemajorRadius(const Standard_Real p) { majorRadius = p; }
    Standard_Real _CSFDB_GetPGeom2d_EllipseminorRadius() const { return minorRadius; }
    void _CSFDB_SetPGeom2d_EllipseminorRadius(const Standard_Real p) { minorRadius = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_Ellipse)

protected:




private: 


  Standard_Real majorRadius;
  Standard_Real minorRadius;


};







#endif // _PGeom2d_Ellipse_HeaderFile
