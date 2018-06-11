note
	description: "Summary description for {BEST_FIT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BEST_FIT

inherit
	FIT

create
	make_bf

feature -- Initialization

	make_bf(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			make(pTamanio_cajas, pSecuencia_objetos) --FIT
		end

feature -- Implementation
	ejecutar_bf
		local
			i_Obj, i_Caja: INTEGER
		do
			crear_caja -- primera caja vacia

			from
				i_Obj := 1
			until
				i_Obj > get_secue_obj_size -- LINKED_LIST: los indices empiezan con 1
			loop
				i_Caja := get_id_caja_mas_llena(get_tamanio_obj_secue(i_Obj))

				if i_Caja /= -1 then
					agregar_obj_a_caja(i_Caja, i_Obj)   -- agregar el objeto a la caja
					i_Obj := i_Obj + 1				 	-- siguiente objeto
				else
					crear_caja
				end
			end
		end

	get_id_caja_mas_llena(pTamanio_obj: INTEGER): INTEGER
		local
			i_id_candidato, tam_candidato, esp_caja_actual, i: INTEGER
		do
			i_id_candidato := -1 -- no cabe en ninguna caja

			tam_candidato := get_tamanio_cajas + 1 -- punto de partida para la comparacion

			from
				i := 1
			until
				i > get_cajas_size
			loop
				esp_caja_actual := get_espacio_disp_caja(i)

				if tam_candidato > esp_caja_actual then
					if esp_caja_actual >= pTamanio_obj then
						tam_candidato := esp_caja_actual
						i_id_candidato := i				-- guardar la posición de la caja candidata
					end
				end

				i := i + 1
			end

			Result := i_id_candidato
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
