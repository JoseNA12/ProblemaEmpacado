note
	description: "Summary description for {FIRST_FIT_DECREASING}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRST_FIT_DECREASING

inherit
	FIRST_FIT

create
	make_ffd

feature -- Initialization

	make_ffd(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			make_ff(pTamanio_cajas, ordenar_secuencia_objetos(pSecuencia_objetos)) --FIRST_FIT
		end

feature {NONE} -- Implementation
	ordenar_secuencia_objetos(pSecuencia: LINKED_LIST[OBJETO]): LINKED_LIST[OBJETO]
		require
			pSecuencia.count > 0
		local
			i_Agregado: INTEGER
			i_Candidato: INTEGER
			i_Opositor: INTEGER
			obj_temp: OBJETO
		do
			from
				i_Agregado := 1
			until
				i_Agregado > pSecuencia.count
			loop
				i_Candidato := i_Agregado

				from
					i_Opositor := i_Candidato + 1
				until
					i_Opositor > pSecuencia.count
				loop
					if pSecuencia.i_th(i_Candidato).get_tamanio >= pSecuencia.i_th(i_Opositor).get_tamanio then
						i_Opositor := i_Opositor + 1
					else
						i_Candidato := i_Opositor
						i_Opositor := i_Opositor + 1
					end
				end

				obj_temp := pSecuencia.i_th(i_Agregado)
				pSecuencia.put_i_th(pSecuencia.i_th(i_Candidato), i_Agregado)
				pSecuencia.put_i_th(obj_temp, i_Candidato)
				i_Agregado := i_Agregado + 1
			end

			Result := pSecuencia
		end


feature -- Access

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
