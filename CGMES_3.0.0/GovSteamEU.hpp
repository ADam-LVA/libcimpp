#ifndef GovSteamEU_H
#define GovSteamEU_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Simplified boiler and steam turbine with PID governor.
	*/
	class GovSteamEU : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamEU();
		~GovSteamEU() override;

		CIMPP::Float chc;  /* Control valves rate closing limit (&lt;i&gt;Chc&lt;/i&gt;).  Unit = PU / s.  Typical value = -3,3. Default: 0.0 */
		CIMPP::Float cho;  /* Control valves rate opening limit (&lt;i&gt;Cho&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,17. Default: 0.0 */
		CIMPP::PU cic;  /* Intercept valves rate closing limit (&lt;i&gt;Cic&lt;/i&gt;).  Typical value = -2,2. Default: nullptr */
		CIMPP::PU cio;  /* Intercept valves rate opening limit (&lt;i&gt;Cio&lt;/i&gt;).  Typical value = 0,123. Default: nullptr */
		CIMPP::PU db1;  /* Deadband of the frequency corrector (&lt;i&gt;db1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU db2;  /* Deadband of the speed governor (&lt;i&gt;db2&lt;/i&gt;).  Typical value = 0,0004. Default: nullptr */
		CIMPP::PU hhpmax;  /* Maximum control valve position (&lt;i&gt;Hhpmax&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;  /* Gain of the power controller (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 0,65. Default: nullptr */
		CIMPP::PU kfcor;  /* Gain of the frequency corrector (&lt;i&gt;Kfcor&lt;/i&gt;).  Typical value = 20. Default: nullptr */
		CIMPP::PU khp;  /* Fraction of total turbine output generated by HP part (&lt;i&gt;Khp&lt;/i&gt;).  Typical value = 0,277. Default: nullptr */
		CIMPP::PU klp;  /* Fraction of total turbine output generated by HP part (&lt;i&gt;Klp&lt;/i&gt;).  Typical value = 0,723. Default: nullptr */
		CIMPP::PU komegacor;  /* Gain of the speed governor (&lt;i&gt;Kwcor&lt;/i&gt;).  Typical value = 20. Default: nullptr */
		CIMPP::ActivePower mwbase;  /* Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::PU pmax;  /* Maximal active power of the turbine (&lt;i&gt;Pmax&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU prhmax;  /* Maximum low pressure limit (&lt;i&gt;Prhmax&lt;/i&gt;).  Typical value = 1,4. Default: nullptr */
		CIMPP::PU simx;  /* Intercept valves transfer limit (&lt;i&gt;Simx&lt;/i&gt;).  Typical value = 0,425. Default: nullptr */
		CIMPP::Seconds tb;  /* Boiler time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 100. Default: nullptr */
		CIMPP::Seconds tdp;  /* Derivative time constant of the power controller (&lt;i&gt;Tdp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ten;  /* Electro hydraulic transducer (&lt;i&gt;Ten&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tf;  /* Frequency transducer time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tfp;  /* Time constant of the power controller (&lt;i&gt;Tfp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds thp;  /* High pressure (HP) time constant of the turbine (&lt;i&gt;Thp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,31. Default: nullptr */
		CIMPP::Seconds tip;  /* Integral time constant of the power controller (&lt;i&gt;Tip&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tlp;  /* Low pressure (LP) time constant of the turbine (&lt;i&gt;Tlp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,45. Default: nullptr */
		CIMPP::Seconds tp;  /* Power transducer time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,07. Default: nullptr */
		CIMPP::Seconds trh;  /* Reheater  time constant of the turbine (&lt;i&gt;Trh&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 8. Default: nullptr */
		CIMPP::Seconds tvhp;  /* Control valves servo time constant (&lt;i&gt;Tvhp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tvip;  /* Intercept valves servo time constant (&lt;i&gt;Tvip&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,15. Default: nullptr */
		CIMPP::Seconds tw;  /* Speed transducer time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::PU wfmax;  /* Upper limit for frequency correction (&lt;i&gt;Wfmax&lt;/i&gt;) (&amp;gt; GovSteamEU.wfmin).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU wfmin;  /* Lower limit for frequency correction (&lt;i&gt;Wfmin&lt;/i&gt;) (&amp;lt; GovSteamEU.wfmax).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU wmax1;  /* Emergency speed control lower limit (&lt;i&gt;wmax1&lt;/i&gt;).  Typical value = 1,025. Default: nullptr */
		CIMPP::PU wmax2;  /* Emergency speed control upper limit (&lt;i&gt;wmax2&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU wwmax;  /* Upper limit for the speed governor (&lt;i&gt;Wwmax&lt;/i&gt;) (&amp;gt; GovSteamEU.wwmin).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU wwmin;  /* Lower limit for the speed governor frequency correction (&lt;i&gt;Wwmin&lt;/i&gt;) (&amp;lt; GovSteamEU.wwmax).  Typical value = -1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* GovSteamEU_factory();
}
#endif
