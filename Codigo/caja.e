note
	description: "Summary description for {CAJA}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAJA

create
	make

feature -- Initialization

	make (pId, pTamanio, pEspacio_disponible: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
			espacio_disponible := tamanio
			create lista_objetos.make

		end

feature {NONE} -- Access
	identificador: INTEGER
	--tamanio: INTEGER
	lista_objetos: LINKED_LIST[OBJETO]

feature {FIT} -- Access
	tamanio: INTEGER
	espacio_disponible: INTEGER -- para que caja lo pueda utilizar

	get_identificador: INTEGER
		do
			Result := identificador
		end

	get_tamanio: INTEGER
		do
			Result := tamanio
		end

	get_espacio_dist: INTEGER
		do
			Result := espacio_disponible
		end

	get_objeto(pos: INTEGER): OBJETO
		do
			Result := lista_objetos.i_th(pos)
		end

	get_objetos_size: INTEGER
		do
			Result := lista_objetos.count
		end

feature --Element change
	agregar_objeto(pObjeto: OBJETO)
		do
			lista_objetos.extend(pObjeto)
			espacio_disponible := espacio_disponible - pObjeto.get_tamanio
		end

end
