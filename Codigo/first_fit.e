note
	description: "Summary description for {FIRST_FIT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRST_FIT

inherit
	FIT

create
	make_ff

feature -- Initialization

	make_ff(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			make(pTamanio_cajas, pSecuencia_objetos) --FIT
		end

feature -- Implementation
	ejecutar_ff
		local
			i_Obj, i_Caja: INTEGER
		do
			crear_caja -- primera caja vacia

			from
				i_Obj := 1
				i_Caja := 1
			until
				i_Obj > get_secue_obj_size -- LINKED_LIST: los indices empiezan con 1
			loop
				if get_espacio_disp_caja(i_Caja) >= get_tamanio_obj_secue(i_Obj) then
					agregar_obj_a_caja(i_Caja, i_Obj)   -- agregar el objeto a la caja
					i_Obj := i_Obj + 1				 	-- siguiente objeto
					i_Caja := 1						 	-- al agregar un obj mantenerme en la 1er caja

				elseif get_cajas_size > i_Caja then		-- no hay espacio en la caja actual, pase a la siguiente
					i_Caja := i_Caja + 1
				else
					i_Caja := i_Caja + 1				-- si no hay más cajas, cree una
					crear_caja

				end
			end
		end

feature -- Element change

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

invariant
	invariant_clause: True -- Your invariant here

end
