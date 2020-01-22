#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
# define DLLIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define DLLIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */


/*class DLLIMPORT DllClass
{
  public:
    DllClass();
    virtual ~DllClass(void);

  private:

};

*/

extern "C" __declspec(dllexport) void DLLE();


#endif /* _DLL_H_ */
